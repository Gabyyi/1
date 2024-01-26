#include<iostream>
using namespace std;
int suma(int n)
{
    if(n<10) return n;
    return n%10+suma(n/10);
}
int produs(int n)
{
    if(n<10) return n;
    return n%10*produs(n/10);
    //return produs(n/10)*(n%10);
}
int maxim(int n)
{
    if(n<10) return n;
    return max(n%10,maxim(n/10));
    /*int m=maxim(n/10);
    if(n%10>m) return n%10;
    return m;*/
}
int minim(int n)
{
    if(n<10) return n;
    return min(n%10,minim(n/10));
    /*int m=minim(n/10);
    if(n%10<m) return n%10;
    return m;*/
}
int f(int n)
{ if (n<10) return f(n+1)+3;
  else if (n==10) return 7;
  else return f(n-2)-1;
}
int main()
{
    int n;
    cin>>n;
    cout<<suma(n)<<" "<<produs(n)<<" "<<maxim(n)<<" "<<minim(n);
}