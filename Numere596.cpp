#include<iostream>
using namespace std;
int v[25001];
int main()
{
    int n,i,j,x,nr=0,gasit;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    do
    {
        gasit=0;
        for(i=1;i<=n-1;i++)
           
                if(v[i]==v[i+1])
                {
                    for(j=i;j<=n-2;j++)
                        v[j]=v[j+2];
                    n=n-2;nr++;
                    gasit=1;
                    break;
                }
    }while(gasit==1);
    cout<<nr<<endl;
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";

}