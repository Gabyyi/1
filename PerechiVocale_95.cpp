#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int k=0;
    char s[256];
    cin.get(s,256);
    for(int i=0;i<strlen(s)-1;i++)
        if(strchr("aeiou",s[i])!=NULL && strchr("aeiou",s[i+1])!=NULL) k++;
    cout<<k;
}