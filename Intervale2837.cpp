#include<iostream>
using namespace std;
int main()
{
    int n,x=-1,i,v[101]={0},gasit=0;
    while(cin>>n)
        v[n]++;//ctrl-Z
    for(i=0;i<=100;i++)
    {
        if(v[i]>0)
            if(x==-1) x=i;//este cel mai mic nr din sir
        else
        {
            if(i-x>=2)
            {
                cout<<x<<" "<<i<<endl;
                gasit=1;
            }
            x=i;
        }
    }
    if(gasit==0) cout<<"nu exista";
}