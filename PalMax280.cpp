#include<iostream>
using namespace std;
int palindrom(int x)
{
    int y,p=0;
    y=x;
    while(y!=0)
    {
        p=p*10+y%10;
        y/=10;
    }
    if(x==p) return 1;
    return 0; 
}
int main()
{
    int n,M=-1,P=0;
    cin>>n;
    while(n!=0)
    {
        if(palindrom(n))
        {
            if(n>M)
            {
                M=n;
                P=1;
            }
            else if(n==M) P++;
        }
        cin>>n;
    }
    if(M==-1) cout<<"NU EXISTA";
    else cout<<M<<" "<<P;
}