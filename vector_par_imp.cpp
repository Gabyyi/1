#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(int j=1;j<=n;j++)
    {
        int sortat=0;
        while(sortat==0)
        {
            sortat=1;
            for(i=1;i<=n-1;i++)
                if(v[i]%2==0)
                {
                    int aux=0;
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    sortat=0;
                }
            break;
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}