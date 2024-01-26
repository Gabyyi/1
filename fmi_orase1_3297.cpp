#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("fmi_orase1.in");
    ofstream fout("fmi_orase1.out");
    int n,a[101],vol=0;
    cin>>n;//fin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];//fin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(min(a[i],a[j])*abs(i-j)>vol) vol=min(a[i],a[j])*abs(i-j);
    cout<<vol;//fout<<vol;
}