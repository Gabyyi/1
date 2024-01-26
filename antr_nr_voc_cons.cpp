#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],*p;
    int v,c,nr=0;
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        v=0,c=0;
        for(int i=0;i<strlen(p);i++)
        {
            if(strchr("aeiou",p[i])!=NULL) v++;
            else c++;
        }
        if(c==v) nr++;
        p=strtok(NULL," ");
    }
    cout<<nr;
}