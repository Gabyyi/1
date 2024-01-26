#include<iostream>
using namespace std;
void identice(int a,int b)
{
    int c=0,j=0,nr=0;
    for(int i=a;i<=b;i++)
    {
        j=i;
        c=j%10;
        j/=10;
        bool ok=1;
        while(j!=0)
        {
            if(c!=j%10) 
            {
                ok=0;
                break;
            }
            j/=10;
        }
        if(ok==1) 
        {
            cout<<i<<" ";
            nr++;
        }
    }
    if(nr==0) cout<<"nu exista";
}
int main()
{
    int a,b;
    cin>>a>>b;
    identice(a,b);
}
