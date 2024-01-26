#include <iostream>
using namespace std;
int prim(int x)
{
    int d;
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int aproape_prim(int x)
{
    int a,b=1;
    if(x==1) return 0;
    if(x%2==0)
    {
        a=2;
        b=x/2;
    }
    for(a=3;a*a<=x;a=a+2)
        if(x%a==0) 
        {
            b=x/a;
            break;
        }
    if(prim(b) && b>a) return 1;
    return 0;
}
int main()
{
    int n,x,M=0,C=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(aproape_prim(x))
        {
            if(x>M)
            {
                M=x;
                C=1;
            }
            else if(x==M) C++;
        }
    }
    if(M==0) cout<<"NU EXISTA";
    else cout<<M<<" "<<C;
}