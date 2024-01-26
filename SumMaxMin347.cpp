#include<iostream>
using namespace std;
int main()
{
    int n,x,max=0,min=101;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x>max) max=x;
        if(x<min) min=x;
    }
    cout<<min<<" "<<max;
}