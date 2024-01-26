#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char n[101];
    cin.get(n,101);
    int m=0,q=0,p=1;
    for(int i=strlen(n)-1;i>=0;i--)
    {
        m=m+((int)n[i]-48)*p;
        p*=2;
    }
    cout<<m<<' ';
    int k=0,x[100];
    while(m!=0)
    {
        k++;
        x[k]=m%4;
        m/=4;
    }
    for(int i=k;i>=1;i--)
        cout<<x[i];
}