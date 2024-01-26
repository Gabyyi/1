#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin.get(s,101);
    if(s[0]>='a' && s[0]<='z') s[0]=s[0]-32;
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            if(s[i-1]!=' ') s[i]=s[i]+32;
        if(s[i]>='a' && s[i]<='z')
            if(s[i-1]==' ') s[i]=s[i]-32;
    }
    cout<<s;
}