#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    /*char s[101],nou[501],*p,c;
    cin.get(s,101);
    nou[0]='\0';
    p=strtok(s," ");
    c=p[strlen(p)-1];
    strcat(nou,p);
    strcat(nou," ");
    p=strtok(NULL," ");
    while(p!=NULL)
    {
        if(c==p[strlen(p)-1]) strcat(nou,"succes ");
        strcat(nou,p);
        strcat(nou," ");
        c=p[strlen(p)-1];
        p=strtok(NULL," ");
    }
    cout<<nou;*/


    //SAU


    char s[201],nou[201],*p,*q;
    cin.get(s,101);
    p=strtok(s," ");
    strcpy(nou,p);
    strcat(nou," ");
    q=strtok(NULL," ");
    while(q!=NULL)
    {
        if(p[strlen(p)-1]==q[strlen(q)-1]) strcat(nou,"succes ");
        strcat(nou,q);
        strcat(nou," ");
        p=q;
        q=strtok(NULL," ");
    }
    nou[strlen(nou)-1]='\0';
    strcpy(s,nou);
    cout<<s;

}