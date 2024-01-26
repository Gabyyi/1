#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],nou[101],*p;
    nou[0]='\0';
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        if(p[0]!='-') strcat(nou,p);
        p=strtok(NULL," ");
        if(p!=NULL) strcat(nou," ");
    }
    cout<<nou;
}