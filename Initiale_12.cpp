#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[256];
    cin.get(s,256);
    s[0]=s[0]-32;
    for(int i=1;i<strlen(s);i++)
        if((s[i-1]==' ' || s[i+1]==' ') && (s[i]>='a' && s[i]<='z')) s[i]=s[i]-32;
    s[strlen(s)-1]=s[strlen(s)-1]-32;
    cout<<s;
}