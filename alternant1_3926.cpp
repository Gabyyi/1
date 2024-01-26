#include<iostream>
using namespace std;
int main()
{
    int ok=1,c1,c2;
    long long n;
    cin>>n;
    if(n<10) cout<<"da";
    else
    {
        c1=n%10;
        n/=10;
        while(n!=0)
        {
            c2=n%10;
            if(c1%2!=c2%2) ok=1;
            else ok=0;
            if(ok==0) break;
            c1=c2;
            n/=10;
        }
        if(ok==1) cout<<"da";
        else cout<<"nu";
    }
}