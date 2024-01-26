#include<iostream>
using namespace std;
int main()
{
    int n,MIN=1000000;
    cin>>n;
    while(n!=0)
    {
        if(n>0 && n<MIN) MIN=n;
        cin>>n;
    }
    if(MIN==1000000) cout<<"NU EXISTA";
    else cout<<MIN;
}