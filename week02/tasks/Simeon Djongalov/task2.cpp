#include<iostream>
using namespace std;

int main(){
    int NOD,NOK;
    bool zadacha2 = false;
    int digits[5];
    for(int q=0;q<=4;q++){
        cin >> digits[q];
    }
    if(digits[2]%2 == 0){
        for(int i=1;i<=9;i++){
            if(digits[0]%i==0&&digits[1]%i==0)
                NOD = i;
        }
        if((digits[2]+digits[3])%NOD==0)
            zadacha2 = true;
    }else{
        for(int p=9;p>1;p--){
            if(digits[0]%p==0&&digits[4]%p==0)
                NOK = p;
        }
        if((digits[1]*digits[2])%NOK==0)
            zadacha2 = true;
    }   
    cout << zadacha2;
  return 0;
  }
