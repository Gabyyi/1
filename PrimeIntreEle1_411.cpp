#include<iostream>
using namespace std;
int cmmdc(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int n,C=0;
    cin>>n;
    C=n;
    for(int i=2;i<n;i++)
        for(int j=i;j<=n;j++)
            if(cmmdc(i,j)==1) C++;
    cout<<C;
}