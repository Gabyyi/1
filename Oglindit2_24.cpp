#include<iostream>
using namespace std;
int oglindit(int n)
{
    int ogl=0,c=0;
    while(n!=0)
    {
        c=n%10;
        ogl=ogl*10+c;
        n/=10;
    }
    return ogl;
}
int main()
{
    int n;
    cin>>n;
    cout<<oglindit(n);
    return 0;
}