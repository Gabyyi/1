#include<iostream>
using namespace std;
int main()
{
    /*long long n,m,q=0;
    int c=10,ok=0;
    cin>>n;
    m=n;
    while(m!=0)
    {
        if(c>m%10) c=m%10;
        m/=10;
    }
    while(n!=0)                   //???????????????????
    {
        q=q*10+n%10;
        n/=10;
    }
    while(q!=0)
    {
        if(q%10==c && ok==0) ok=1;
        else m=m*10+q%10;
        q/=10;
    }
    cout<<m;*/
    int n,v[15],k=0,nr,nrmax=0;
    cin>>n;
    while (n!=0)
	{
	    k++;
	    v[k]=n%10;
	    n=n/10;
	}
    for(int i=1;i<=k;i++)  // v[i] va fi cifra care se va elimina din numar
	{
	    nr=0;
	    for(int j=k;j>=1;j--)
	    	if(j!=i) nr=nr*10+v[j];
	    if(nr>nrmax) nrmax=nr;
	}
    cout<<nrmax;
}