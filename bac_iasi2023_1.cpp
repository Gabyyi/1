#include<iostream>
using namespace std;
void ecran(int n)
{
    int i=0,v[10];
    while(n!=0)
    {
        i++;
        v[i]=n%10;
        n/=10;
    }
    for(int j=1;j<=i+1;j++)
    {
        for(int l=i;l>=j;l--)
            cout<<v[l];
        for(int l=1;l<=2*j-1;l++)
            cout<<'*';
        for(int l=i+1-j;l>=1;l--)
            cout<<v[l];
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    ecran(n);
}