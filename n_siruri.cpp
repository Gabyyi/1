#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100][100];
    int n,l;
    cin>>n;
    cin.get();
    for(int i=1;i<=n;i++)
        cin.getline(s[i],101);
    l=strlen(s[1]);
    for(int i=2;i<=n;i++)
    {
        if(l<strlen(s[i])) l=strlen(s[i]);
    }
    cout<<l;
}