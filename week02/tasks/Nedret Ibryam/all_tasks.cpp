//zadacha 1
int main()
{
    char sign;
    double arg1, arg2;
    cout<<"Arg1=";
    cin>>arg1;
    cout<<"sign: ";
    cin>>sign;
    cout<<"Arg2: ";
    cin>>arg2;

    if(sign=='+') cout<<arg1<<'+'<<arg2<<'='<<arg1+arg2<<endl;
    else if(sign=='-') cout<<arg1<<'-'<<arg2<<'='<<arg1-arg2<<endl;
    else if(sign=='*') cout<<arg1<<'*'<<arg2<<'='<<arg1*arg2<<endl;
    else if(sign=='/') 
    {
        if(arg2==0) cout<<"Haha, Zero! ;) Try again!\n";
        else cout<<arg1<<'/'<<arg2<<'='<<arg1/arg2<<endl;
    }
    else cout<<"Wrong sign!\n";
    
    // or

    switch(sign)
    {
    case '+': cout<<arg1<<'+'<<arg2<<'='<<arg1+arg2<<endl; break;
    case '-': cout<<arg1<<'-'<<arg2<<'='<<arg1-arg2<<endl; break;
    case '*': cout<<arg1<<'*'<<arg2<<'='<<arg1*arg2<<endl; break;
    case '/': 
    {
        if(arg2==0) cout<<"arg2 is ZERO! TRY AGAIN!\n";
        else cout<<arg1<<'/'<<arg2<<'='<<arg1/arg2<<endl; 
        break;
    }
    default: cout<<"Wrong sign!\n";
    }

    return 0;
}

//zadacha 2 - s funkciq
int gcd(int a, int b)
{
    if(a!=0 && b!=0)
    {
        while (a!=b) 
        {
            if (a < b)
            {
                swap(a, b);
            }
            a-=b;
        }
        return a;
    }
    return max(a, b);
}
int main()
{
    int number;
    cin>>number;
    if(number<10000||number>99999)
    {
        cout<<"10000-99999!\n";
        return 1;
    }
    if((number/100%10)%2==0)
    {
        int digit1=number/10000, digit2=(number/1000)%10;
        cout<<"NOD/GCD: "<<gcd(digit1, digit2)<<endl;
        if((number/100%10 + number/10%10) % gcd(digit1, digit2) == 0) cout<<"NOD/GCD divides the sum "<< number/100%10 + number/10%10 <<endl;
        else cout<<"NOD/GCD does not divide the sum "<< number/100%10 + number/10%10 <<endl;
    }
    else
    {
        int digit1=number/10000, digit5=number%10, lcm;
        lcm=digit1*(digit5/gcd(digit1, digit5));
        cout<<"NOK/LCM: "<<lcm<<endl;
        if((number/1000%10 * number/100%10) % lcm == 0) cout<<"NOK/LCM divides the product "<<number/1000%10 * number/100%10<<endl;
        else cout<<"NOK/LCM does not divide the product "<<number/1000%10 * number/100%10<<endl;
    }
    return 0;
}

//zadacha 2 - bez funkciq
int main()
{
    int number;
    cin>>number;
    if(number<10000||number>99999)
    {
        cout<<"10000-99999!\n";
        return 1;
    }
    if((number/100%10)%2==0)
    {
        int digit1=number/10000, digit2=(number/1000)%10;
        if(digit1!=0 && digit2!=0)
        {
            while (digit1!=digit2) 
            {
                if (digit1 < digit2)
                {
                    swap(digit1, digit2);
                }
                digit1-=digit2;
            }
        }
        else if(digit1 < digit2) digit1=digit2; // вземаме максималното, защото GCD(0,A)=A, GCD(A, 0)=A И GCD(0,0)=0; 
        // за да не заделяме излишно памет, просто digit1 ни става gcd
        cout<<"NOD/GCD: "<<digit1<<endl;
        if((number/100%10 + number/10%10) % digit1 == 0) cout<<"NOD/GCD divides the sum "<< number/100%10 + number/10%10 <<endl;
        else cout<<"NOD/GCD does not divide the sum "<< number/100%10 + number/10%10 <<endl;
    }
    else
    {
        int digit1, old_digit1, digit5, old_digit5, lcm;
        digit1=old_digit1=number/10000;
        digit5=old_digit5=number%10;
        if(digit1!=0 && digit5!=0)
        {
            while (digit1!=digit5)
            {
                if(digit1 < digit5)
                {
                    swap(digit1, digit5);
                }
                digit1-=digit5;
            }
        }
        else if(digit1 < digit5) digit1=digit5;
        // за да не заделяме излишно памет, просто digit1 ни става gcd
        lcm=old_digit1*(old_digit5/digit1); // formulata e NOK=a*(b/NOD(a, b))
        cout<<"NOK/LCM: "<<lcm<<endl; 
        if((number/1000%10 * number/100%10) % lcm == 0) cout<<"NOK/LCM divides the product "<<number/1000%10 * number/100%10<<endl;
        else cout<<"NOK/LCM does not divide the product "<<number/1000%10 * number/100%10<<endl;
    }
    return 0;
}

//zadacha 3
int main()
{
    double a, b, c; // ax^2+bx+c=0
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;

    if(a!=0)
    {
        if(b!=0)
        {
            if(c!=0)
            {
                double disc;
                disc=b*b-4*a*c;
                if(disc==0)
                {
                    cout<<"x="<<-b/(2*a)<<" or x="<<-b<<'/'<<2*a<<endl;
                }
                else if(disc>0)
                {
                    cout<<"x1="<<(-b+sqrt(disc))/(2*a)<<" and x2="<<(-b-sqrt(disc))/(2*a)<<endl;
                }
                else // complex numbers
                {
                    cout<<"x1="<<(-b/(2*c));
                    (c>0)?cout<<'+':cout<<'-';
                    cout<<sqrt(abs(disc))/(2*c)<<"i and ";

                    cout<<"x2="<<(-b/(2*c));
                    (c<0)?cout<<'+':cout<<'-';
                    cout<<sqrt(abs(disc))/(2*c)<<"i\n";                    
                }
            }
            else
            {
                cout<<"x1=0 and (x2="<<-b<<"/"<<a<<" or x2="<<-b/a<<")\n";
            }
        }
        else
        {
            if(c!=0)
            {
                if(-c/a<0) // complex numbers
                {
                    cout<<"x1=-"<<sqrt(abs(c/a))<<"i x2="<<sqrt(abs(c/a))<<"i\n";
                }
                else
                {
                    cout<<"x1=-"<<sqrt(-c/a)<<" x2="<<sqrt(-c/a)<<endl;
                }
            }
            else
            {
                cout<<"x=0\n";
            }
        }

    }
    else
    {
        if(b!=0)
        {
            cout<<"x="<<-c<<"/"<<b<<" or x="<<-c/b<<endl;
        }
        else
        {
            if(c!=0) cout<<"No solution!\n";
            else cout<<"True for all x!\n";
        }
    }
    return 0;
}

//zadacha 4
int main()
{
    double x, y, center1_x, center1_y, center2_x, center2_y, radius1, radius2;
    cout<<"Coordinates of the point x and y: ";
    cin>>x>>y;

    cout<<"Coordinates of the first center: ";
    cin>>center1_x>>center1_y;

    cout<<"Radius of the first circle: ";
    cin>>radius1;

    cout<<"Coordinates of the second center: ";
    cin>>center2_x>>center2_y;

    cout<<"Radius of the second circle: ";
    cin>>radius2;

    if((x-center1_x)*(x-center1_x)+(y-center1_y)*(y-center1_y)<=radius1*radius1)
    {
        if((x-center2_x)*(x-center2_x)+(y-center2_y)*(y-center2_y)<=radius2*radius2)
        {
            cout<<"(x, y) is in their section"<<endl;
        }
        else 
        {
            cout<<"(x, y) is not in their section"<<endl;
        }
    }
    else 
    {
        cout<<"(x, y) is not in their section"<<endl;
    }
    return 0;
}

//zadacha 5
int main()
{
    int day, month, year, addDays;
    bool leap_year=false;
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;

    if(day<1||day>31)
    {
        cout<<"Incorrectly entered day!\n";
        return 1;
    }
    if(month<1||month>12)
    {
        cout<<"Incorrectly entered month\n";
        return 1;
    }
    leap_year=(((year%4==0) && (year%100!=0)) || (year%400==0))?true:false;
    if(month==2)
    {
        if(leap_year)
        {
            if(day>29)
            {
                cout<<"Incorrectly entered day!\nThe second month has 29 days for the entered year!\n";
                return 1;
            }
        }
        if(day>28)
        {
            cout<<"Incorrectly entered day!\nThe second month has 28 days for the entered year!\n";
            return 1;
        }
    }
    if(month==4 || month==6 || month==9 || month==11)
    {
        if(month>30)
        {
            cout<<"Incorrectly entered days for the month!\nmonth "<<month<<" has 30 days!\n";
            return 1;
        }
    }

    cout<<"Enter the days and check which is the next season: ";
    cin>>addDays;

    addDays=addDays%365;
    //cout<<"%365:"<<addDays%365<<endl;

    int allDays=0;
    switch (month-1)
    {
    case 12: allDays+=31;
    case 11: allDays+=30;
    case 10: allDays+=31;
    case 9: allDays+=30;
    case 8: allDays+=31;
    case 7: allDays+=31;
    case 6: allDays+=30;
    case 5: allDays+=31;
    case 4: allDays+=30;
    case 3: allDays+=31;
    case 2: { (leap_year==true)?allDays+=29:allDays+=28; }
    case 1: allDays+=31;
    }
    allDays+=day;
    cout<<"ALL DAYS: "<<allDays<<endl;

    if(allDays+addDays>365)
    {
        addDays-=(365-allDays);
        allDays=addDays;
    }else allDays+=addDays;
    
    //cout<<"NOVITE DNI: "<<allDays<<endl;

    if(allDays>=335 || (allDays>=1 && allDays<=59)) cout<<"Winter / Zima\n";
    else if(allDays>=60 && allDays<=151) cout<<"Spring / Prolet\n";
    else if(allDays >=152 && allDays<=243) cout<<"Summer <3 / Lqto\n";
    else if(allDays>=244 && allDays<=334) cout<<"Autumn / Esen\n";

    return 0;
}
