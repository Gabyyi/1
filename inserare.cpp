#include<iostream>
#include<cmath>
using namespace std;
void inserare(int &n)
{
    //varianta 1
/*  
    int a[10],k=0,c=0;
    while(n!=0)
    {
        c=n%10;
        n/=10;
        k++;
        a[k]=c;
    }
    n=a[k];
    for(int i=k-1;i>=1;i--)
    {
        n=n*10+abs(a[i]-a[i+1]);
        n=n*10+a[i];
    }*/

    int c1=0,c2=0,p=1,m=0;
    m=n;
    n=0;
    while(m>9)
    {
        c1=m%10;
        m/=10;
        c2=m%10;
        n=c1*p+n;
        p=p*10;
        n=abs(c1-c2)*p+n;
        p=p*10;
    }
    n=m*p+n;
}

//https://www.pbinfo.ro/resurse/9dc152/examene/2019/simulare/E_d_Informatica_2019_sp_MI_C_var_simulare_LRO.pdf

int main()
{
    int n;
    cin>>n;
    inserare(n);
    cout<<n;
}