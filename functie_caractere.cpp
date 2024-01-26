#include<iostream>
#include<cstring>
using namespace std;
int nrap(char s[], char c)
{
    int nr=0;
    for(int i=0;i<strlen(s);i++)
        if(s[i]==c) nr++;
    return nr;
}
int main()
{
    char s1[101],s2[101],c;
    int ok=1;
    cin.get(s1,101);
    cin.get();
    cin.get(s2,101);
    for(char c='a';c<='z';c++)
        if(nrap(s1,c)!=nrap(s2,c)) {ok=0;break;}
    if(ok==0) cout<<"NU";
    else cout<<"DA";
}