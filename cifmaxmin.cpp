#include<iostream>
using namespace std;
/*void cifmaxmin(int n,int &max,int &min)
{
    int c=0;
    max=-1;
    min=10;
    n=abs(n);
    while(n!=0)
    {
        c=n%10;
        if(c>=max) max=c;
        if(c<=min) min=c;
        n/=10;
    }
    return;
}*/
void cifmaxmin(int n,int &max,int &min)
{
    if(n<10) max=min=n;
    else
    {
        cifmaxmin(n/10,max,min);
        if(n%10>max) max=n%10;
        if(n%10<min) min=n%10;
    }
}
int main()
{
    int n,max=0,min=0;
    cin>>n;
    cifmaxmin(n,max,min);
    cout<<max<<" "<<min;
}