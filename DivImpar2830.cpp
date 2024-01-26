#include <iostream>
using namespace std;
//int DivImpar(int a, int b)
int main()
{
    int a,b,i=2,p=1;
    cin>>a>>b;
    if(a<b)
        while(i<a)
        {
            if(a%i==0) p=p*i;
            if(b%p==0 && p%2==1) break;
            i++;
        }
    else if(a>b)
        while(i<b)
        {
            if(b%i==0) p=p*i;
            if(a%p==0 && p%2==1) break;
            i++;
        }
    cout<<p;
}
/*int main()
{
    int a,b,p;
    cin>>a>>b;
    if(DivImpar(a,b))
        cout<<p;
}*/