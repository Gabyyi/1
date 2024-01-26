#include<iostream>
using namespace std;
int main()
{
    //Metoda 1

    int n,m,nr=1,s=0;
    long long S=0;
    cin>>n;
    m=n;
    while(m>9)
    {
        nr++;
        s=s+m%10;
        m/=10;
    }
    s=s+m;
    while(nr!=0)
    {
        S=S*10+1;
        nr--;
    }
    S=S*s;
    cout<<S;


    //Metoda 2

    int n,m,p,nrcifre,s;
    cin>>n;
    m=n;
    p=1;
    nrcifre=1;
    while(m>9)
    {
        m/=10;
        nrcifre++;
        p*=10;
    }
    s=n;
    for(int i=1;i<=nrcifre-1;i++)
    {
        n=(n%10)*p+n/10;
        cout<<n<<" ";
        s=s+n;
    }
    cout<<s;
}