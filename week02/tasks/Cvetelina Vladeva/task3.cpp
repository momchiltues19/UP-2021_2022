double a, b, c;
	double x1, x2;
	cin >> a >> b >> c;
	int d = b * b - 4 * a * c;
	if (d>0)
	{
		 x1 = (-b + sqrt(d)) / (2 * a);
		 x2 = (-b - sqrt(d)) / (2 * a);

		cout << "x1= " << x1 << endl << "x2= " << x2;
	}
	else if(d==0)
	{
		 x1 = x2 = (-b) / (2 * a);

		 cout << "x1=x2= " << x1;
	}
	else 
	{
		double im, re;
		re = (-b) / (2 * a);
		im = sqrt(-d) / (2 * a);
		cout << "x1 = " << re << "+" << im << "*i" << endl;
		cout << "x2 = " << re << "-" << im << "*i" << endl;

	}
