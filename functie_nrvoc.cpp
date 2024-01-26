#include<iostream>
#include<cstring>
using namespace std;
int vocal(char s[])
{
    int nr=0;
    char v[]="aeiou";
    for(int i=0;i<strlen(s);i++)
        if(strchr(v,s[i])!=NULL) nr++;
    return nr;
}
int main()
{
    char s[51];
    cin.get(s,51);
    cout<<vocal(s);
}