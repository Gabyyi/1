#include <iostream>
using namespace std;
int main()
{
    int n,v[10],p=0,i=0;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        do
        {
            cin>>v[j];
        } while (v[j]>1000000000);
        while(v[j]!=0)
        {
            
            if((v[j]%10)%2==0) p++;
            else i++;
            v[j]/=10;
        }
    }
    cout<<p<<" "<<i;
}