#include<iostream>
using namespace std;
struct masina
{
    char model[51];
    int an;
}x[10],y;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin.get();
        cin.get(x[i].model,51);
        cin>>x[i].an;
    }
    for(i=0;i<=n-1;i++)
        for(j=i+1;j<n;j++)
        {
            y=x[i];
            x[i]=x[j];
            x[j]=y;
        }
    for(i=0;i<n;i++)
        cout<<x[i].model<<" "<<x[i].an<<'\n';
}