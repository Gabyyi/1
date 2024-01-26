#include<iostream>
using namespace std;
int main()
{
    int x,y,C=0;
    cin>>x>>y;
    while(x!=0 && y!=0)
    {
        while(x>9) x/=10;
        while(y>9) y/=10;
        if(x==y) C++;
        cin>>x>>y;
    }
    cout<<C;
}