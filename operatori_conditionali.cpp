#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //countmod10-3609
   /* int m,n,u,p;
    cin>>m>>n;
    //sol. 1
    cout<<n/10-(m-1)/10<<endl;
    //sol. 2;
    u=n/10;
    p=m%10==0?m/10:m/10+1;
    cout<<u-p+1<<endl;

    //abcd-3928
    int a,b,c,d,u1,p1,u2,p2;
    cin>>a>>b>>c>>d;
    u1=b/3;
    p1=a%3==0?a/3:a/3+1;
    u2=d/3;
    p2=c%3==0?c/3:c/3+1;
    cout<<u1-p1+1+u2-p2+1;


    //timp-460
    int h1,h2,m1,m2,x;
    cin>>h1>>m1>>x;
    m2=(m1+x)%60;
    h2=(h1+(m1+x)/60)%24;
    cout<<h2<<" "<<m2;

    //2lan-3479
    int n;
    cin>>n;
    if(n==0) cin>>1;
    else 
    switch(n%4)
    {
        case 0: cout<<6;break;
        case 1: cout<<2;break;
        case 2: cout<<4;break;
        default: cout<<8;
    }

*/
    //calculator-1303
    int A,B,R=0;
    char op;
    cin>>A>>B;
    cin>>op;
    switch(op)
    {
        case '+': R=A+B;break;
        case '-': R=A>B?A-B:B-A;break;
        case '*': R=A*B;break;
        case '/': R=A>B?A/B:B/A;break;
        default: cout<<"error";
    }
    cout<<R;
}