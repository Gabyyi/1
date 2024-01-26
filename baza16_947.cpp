#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,k=0,x[100];
    cin>>n;
    while(n!=0)
    {
        k++;
        x[k]=n%16;
        n/=16;
    }
    for(int i=k;i>=1;i--)
    {
        if(x[i]>9)
        {
            int a;
            a='A'+x[i]%10;
            char ch=a;
            cout<<ch;
        }
        //cout<<(char)(x[i]-10+'A');
        else cout<<x[i];
    }
}