#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],aux[101];
    cin.get(s,101);
    for(int i=0;i<strlen(s);i++)
        if(s[i]=='-') {strcpy(aux,s+i+1);strcpy(s+i,aux);}
    cout<<s;
}