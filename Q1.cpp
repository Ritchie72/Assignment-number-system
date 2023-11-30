#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1; i<=n;i++){
        sum = sum+i;
        
    }
    int result = 0;
    int a =1; 
    while(sum>0){
        result = result + (sum%2)*a;
        a = a*10;
        sum = sum/2;
        
    }
    cout<<result;
}
