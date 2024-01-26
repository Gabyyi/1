#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("sir11.in");
    //ofstream fout("sir11.out");
    int n,a=1,b=-1,c;
    cin>>n;
    for(int i=3;i<=n;i++)
    {
        c=1-2*b-a;
        if(i!=n)
        {
            a=b;
            b=c;
        }
    }
    for(int i=n;i>=3;i--)
    {
        cout<<c<<" ";
        a=1-2*b-c;
        c=b;
        b=a;
    }
    cout<<-1<<" "<<1;
}


/*int sir(int x)
{
    int a=1,b=-1,c=0;
    for(int i=3;i<=x;i++)
    {
        c=1-2*b-a;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    ifstream fin("sir11.in");
    ofstream fout("sir11.out");
    int n;
    cin>>n;//fin>>n;
    while(n>=3)
    {
        //cout<<sir(n)<<" ";
        n--;
    }
    fout<<-1<<" "<<1;
}*/

/*void siir(int x,int a,int b)
{
    if(x>=3) 
    {
        cout<<1-2*b-a<<" ";
        siir(x-1,b,1-2*b-a);
    }
}
int main()
{
    int n;
    cin>>n;
    siir(n,1,-1);
    cout<<-1<<" "<<1;;
}*/