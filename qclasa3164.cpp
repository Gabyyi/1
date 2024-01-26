#include<iostream>
using namespace std;
struct elev
{
    int cod,abs,med;
}v[41];
int main()
{
    int n,i,nr=0,medie=0,j,p;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i].cod>>v[i].med>>v[i].abs;
    for(i=1;i<=n;i++)
    {
        if(v[i].med==10) nr++;
        medie=medie+v[i].med;
    }
    for(i=1;i<=n;i++)
        for(j=i+1;j<n;j++)
            if(v[i].abs<v[j].abs)
                swap(v[j],v[i]);
            else if(v[i].abs==v[j].abs && v[i].cod>v[j].cod)
                swap(v[i],v[j]);
    cout<<nr<<'\n'<<medie/n<<'\n';
    for(i=1;i<=2;i++)
        cout<<v[i].cod<<" "<<v[i].med<<" "<<v[i].abs<<'\n';
}