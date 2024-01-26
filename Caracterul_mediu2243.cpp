#include<iostream>
using namespace std;
int main()
{
    int s=0,nr=0;
    char c;
    cin>>c;
    while(c!='.')
    {
        s=s+c;
        nr++;
        cin>>c;
    }
    cout<<(char)(s/nr);
}