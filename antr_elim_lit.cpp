#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[21];
    int p;
    cin>>s;
    if(s[0]=='A' && s[1]=='I') strcpy(s,s+1);
    for(p=1;p<strlen(s)-1;p++)
        if((s[p]=='A' && s[p+1]=='I') || (s[p]=='A' && s[p-1]=='I')) strcpy(s+p,s+p+1);
    if(s[strlen(s)-1]=='A' && s[strlen(s)-2]=='I') s[strlen(s)-1]='\0';
    cout<<s;
}