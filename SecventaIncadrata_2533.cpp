#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("secventaincadrata.in");
    ofstream cout("secventaincadrata.out");
    int n,poz[10],l[10],lmax=-1,k=0;
    while(cin>>n)
    {
        k++;
        if(poz[n]==0)
        {
            poz[n]=k;
            l[n]=1;
        }
        else l[n]=k-poz[n]+1;
    }
    for(int i=0;i<=9;i++)
        if(l[i]>lmax) lmax=l[i];
    cout<<lmax<<endl;
    for(int i=0;i<=9;i++)
        if(l[i]==lmax) cout<<i<<" ";
}