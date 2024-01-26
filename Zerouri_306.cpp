#include<iostream>
using namespace std;
int main()
{
    int n,x,c2=0,c5=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        while(x%2==0 || x%5==0)
        {
            if(x%2==0) {c2++;x/=2;}
            if(x%5==0) {c5++;x/=5;}
        }
    }
    cout<<min(c2,c5);
}