#include<iostream>
#include<fstream>
using namespace std;
struct
{
    int ap,nr;
}u[101];
int main()
{
    ifstream cin("frecventa1.in");
    ofstream cout("frecventa1.out");
    int n,x,v[101]={},k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v[x]++;      //vector de frecventa, v[x]=de cate ori apare x
    }
    // 7 apare de 5 ori, 8 apare de 3 ori si 2 apare de 5 ori
    for(int i=0;i<100;i++)
        if(v[i]>0)
        {
            k++;
            u[k].nr=i;
            u[k].ap=v[i];
        }
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
        {
            if(u[i].ap<u[j].ap) swap(u[i],u[j]);
            else if(u[i].ap==u[j].ap)
                if(u[i].nr>u[j].nr) swap(u[i],u[j]);
        }
    for(int i=1;i<=k;i++)
        cout<<u[i].nr<<" ";
}