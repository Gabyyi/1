#include<iostream>
using namespace std;
int rasturnat(int x)
{
    int y=0;
    while(x!=0)
    {
        y=y*10+x%10;
        x/=10;
    }
    return y;
}
int main()
{
    int n,D=0,i;
    cin>>n;
    n=rasturnat(n);
    cout<<n<<" ";
    for(i=1;i*i<n;i++)
        if(n%i==0) D=D+2;
    if(i*i==n) D++;
    cout<<D;
}