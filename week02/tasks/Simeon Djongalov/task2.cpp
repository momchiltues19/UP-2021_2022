#include<iostream>
using namespace std;

int main(){
    int gcd,lcm;
    bool awnser = false;
    int digits[5];
    int NUM;
    for(int t=0;t<=4;t++){
        NUM/=10;
        digits[t]=NUM%10;
    }
    cin >> NUM;
    
    if(digits[2]%2 == 0){
        for(int i=1;i<=9;i++){
            if(digits[0]%i==0&&digits[1]%i==0)
                gcd = i;
        }
        if((digits[2]+digits[3])%gcd==0)
            awnser = true;
    }
    else{
        for(int p=9;p>1;p--){
            if(digits[0]%p==0&&digits[4]%p==0)
                lcm = p;
        }
        if((digits[1]*digits[2])%lcm==0)
            awnser = true;
    }
    cout << boolalpha << awnser;
    
    return 0;
  }
