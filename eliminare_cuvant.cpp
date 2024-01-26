#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[256],nou[256],*p,*q;
    int ok;
    nou[0]='\0';
    cin.get(s,256);
    if(s[strlen(s)-1]=='*') ok=1;
    else ok=0;
    p=strtok(s,"*");
    strcpy(nou,"*");
    q=strtok(NULL,"*");
    while(q!=NULL)
    {
        if(strcmp(p,q)!=0) strcat(nou,q);
        strcat(nou,"*");
        q=strtok(NULL,"*");
    }
    if(ok==0) nou[strlen(nou)-1]='\0';
    cout<<nou;
}