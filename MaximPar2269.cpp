#include<iostream>
//#include<fstream>
using namespace std;
int main()
{
    int n,x,maxim=-1,apare=0,ok=0;
    //ifstream fin("maximpar.in");
    //ofstream fout("maximpar.out");
    cin>>n;//fin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;//fin>>x;
        if(x%2==0)
        {
            if(x==maxim) apare++;
            else if(x>maxim)
            {
                maxim=x;
                apare=0;
                apare++;
            }
            ok=1;
        }
    }
    if(ok==0) cout<<-1;//fout<<-1;
    else cout<<maxim<<" "<<apare;//fout<<maxim<<" "<<apare;
}