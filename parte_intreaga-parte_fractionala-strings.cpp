#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[11];
    cin.get(s,11);
    int pi=0,i=0;
    while(s[i]!='.')
    {
        pi=pi*10+(s[i]-'0');
        i++;
    }
    strcpy(s,s+i+1);
    int pz=0;
    int l=strlen(s);
    for(i=l-1;i>=0;i--)
    {
        if(s[i]!='0') break;
        else s[i]='\0';
    }
    i=0;
    while(s[i]!='\0')
    {
        pz=pz*10+(s[i]-'0');
        i++;
    }
    cout<<pi+pz;
    
}