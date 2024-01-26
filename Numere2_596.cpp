#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("numere2.in");
    //ofstream fout("numere2.out");
    int n,v[25001],k=0,i,gasit;
    cin>>n;//fin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];//fin>>v[i];
    do
    {
        k++;
        i=2;
        gasit=0;
        while(i<=n && gasit==0)
        {
            if(v[i]!=v[i-1]) i++;
            else
            {
                gasit=1;
                for(int j=i+1;j<=n;j++) v[j-2]=v[j];
                n=n-2;
            }
        }
    } while (gasit==1);
    cout<<k-1<<endl;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";//fout<<v[i]<<" ";
}

















/*for(int i=1;i<n;i++)
    {
        if(v[i]==v[i+1])
        {
            k++;
            n=n-2;
            i=i-2;
        }
    }
    fout<<k<<endl;*/