#include<iostream>
using namespace std;
int main()
{
    int n,x,min1=10000,min2=10000,min3=10000;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x<min1)
        {
            min3=min2;
            min2=min1;
            min1=x;
        }
        else if(x<min2)
        {
            min3=min2;
            min2=x;
        }
        else if(x<min3) min3=x;
    }
    if(min3==10000) cout<<"nu exista";
    else cout<<min3<<" "<<min2<<" "<<min1;
}