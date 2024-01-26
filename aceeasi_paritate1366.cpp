#include<iostream>
using namespace std;
/*int main()
{
    int n,v[1001],i,j,gasit;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    do
    {
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
        cout<<" "<<endl;
        gasit=0;
        for(i=1;i<n;i++)
        {
            if(((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2!=0 && v[i+1]%2!=0)) && (v[i]!=v[i+1]))
            {
                for(j=n;j>=i+1;j--)
                    v[j+1]=v[j];
                v[i+1]=(v[i]+v[i+2])/2;
                n++;gasit=1;i++;
            }
        }
    }while(gasit==1);
}*/
int ac_paritate(int x,int y)
{
    if(x%2==0 && y%2==0) return 1;
    if(x%2!=0 && y%2!=0) return 1;
    return 0;
}
int main()
{
    int n,v[2001],i,ok,gasit;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    ok=1;
    while (ok==1)
    {
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
        gasit=0;
        i=2;
        while(i<=n)
        {
            if(ac_paritate(v[i],v[i-1])==1 && v[i]!=v[i-1])
            {
                gasit=1;
                for(int j=n;j>=i;j--) v[j+1]=v[j];
                v[i]=(v[i]+v[i-1])/2;
                i=i+2;
                n++;
            }
            else i++;
        }
        if(gasit==0) ok=0;
    }

}