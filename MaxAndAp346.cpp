#include<iostream>
using namespace std;
int main()
{
    int n,x,max=-1,ap=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==max) ap++;
        else if(x>max)
        {
            max=x;
            ap=0;
            ap++;
        }
    }
    cout<<max<<" "<<ap;
}