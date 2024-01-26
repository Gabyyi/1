#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[21][21];
    int n,l;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    l=strlen(s[n]);
    for(int i=1;i<n;i++)
        if(strncmp(s[i],s[n],l)==0) cout<<s[i]<<" ";
}