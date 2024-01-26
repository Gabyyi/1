#include<iostream>
#include<cmath>
using namespace std;
int multiplu(int n)
{
    int x,i=1,gasit=0;
    x=n;
    while(gasit==0)
    {
        x=n*i;
        if(sqrt(x)==int(sqrt(x))) gasit=1;
        i++;
    }
    return x;
}
int main()
{
    int n,x;
    cin>>n;
    x=multiplu(n);
    cout<<x;
}