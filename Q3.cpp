#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int num1 = 0;
    int a = 1;
    int num2 = 0;
    while(n>0){
        num1 = num1 + a*(n%10);
        a = a*2;
        n = n/10;
        
    }
    while(m>0){
        num2 = num2 + a*(n%10);
        a = a*2;
        m = m/10;
        
    }
    if(num1>num2){
        cout<<num1;
    }
    else{
        cout<<num2;
    }
    
}



