#include <iostream>
using namespace std;
int main()
{
    int n,nr=0;
    cin>>n;
    while(n!=0)
    {
        if(n%2==1) nr++;
        cin>>n;
    }
    cout<<nr;
}