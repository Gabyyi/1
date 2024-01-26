#include<iostream>
using namespace std;
int oglindit(int a)
{
    int s=0,c=0;
    while(a!=0)
    {
        c=a%10;
        s=s*10+c;
        a/=10;
    }
    return s;
}
int main()
{
    int na,nb,A[100],B[100],x=0,y=0,nr=0;
    cin>>na>>nb;
    for(int i=1;i<=na;i++)
        cin>>A[i];
    for(int i=1;i<=nb;i++)
        cin>>B[i];
    for(int i=1;i<=na;i++)
    {
        x=A[i]%100;
        for(int j=1;j<=nb;j++)
        {
            y=B[j]%100;
            if((x%10==0 && x/10==y) || (y%10==0 && x==y/10)) nr++;
            if(x==oglindit(y) || x==y) nr++;
        }
    }
    cout<<nr;
}