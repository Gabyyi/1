#include<iostream>
using namespace std;
int main()
{
    int n,x,v[11],k,cmax=0,kmax=0,c,ok;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        k=0;cmax=0;
        while(x!=0)
        {
            k++;
            v[k]=x%10;
            if(v[k]>cmax) {cmax=v[k];kmax=k;}
            x/=10;
        }
        if(kmax==1 || kmax==k) cout<<0<<endl;
        else
        {
            c=1;
            while(c<kmax)
            {
                if(v[c]<v[c+1]) ok=1;
                else {ok=0;break;}
                c++;
            }
            if(ok==0) cout<<0<<endl;
            else
            {
                c=kmax;
                while(c<k)
                {
                    if(v[c]>v[c+1]) ok=1;
                    else {ok=0;break;}
                    c++;
                }
                if(ok==0) cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
    }
}