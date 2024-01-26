#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[51],id[51],*p;
    cin.get(s,51);
    p=strtok(s," ");
    p=strtok(NULL," ");
    strcpy(id,p);
    strcat(id,"2022");
    cout<<id;
}