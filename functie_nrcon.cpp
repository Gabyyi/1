#include<iostream>
#include<cstring>
using namespace std;
int nvoc(char s[])
{
    int nr=0;
    char v[]="aeiouy";
    for(int i=0;i<strlen(s);i++)
        if(strchr(v,s[i])!=NULL) nr++;
    return nr;
}
int main()
{
    char x[21],y[21];
    cin.get(x,21);
    cin.get();
    cin.get(y,21);
    if(strlen(x)-nvoc(x)==strlen(y)-nvoc(y)) cout<<"au acelasi nr de consoane";
    else cout<<"nu au acelasi nr de consoane";
}