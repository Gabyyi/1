#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],aux[101];
    cin.get(s,101);
    for(int i=strlen(s)-1;i>=0;i--)
        if(strchr("aeiou",s[i])!=NULL)
        {
            strcpy(aux,s+i+1);
            strcpy(s+i,aux);
            break;
        }
    cout<<s;
}