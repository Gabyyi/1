#include<iostream>
using namespace std;
int main()
{
    int n,MAX=-1000000;
    cin>>n;
    if(n==0) cout<<"NU EXISTA";
    else
    {
        while(n!=0)
        {
            if(n>MAX) MAX=n;
            cin>>n;
        }
    }
    cout<<MAX;

}