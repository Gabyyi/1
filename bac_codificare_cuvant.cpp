#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[51];
    cin>>s;
    for(int i=0;i<strlen(s);i++)
        if(strchr("aeiou",s[i])==0)
            for(char j=s[i];j>='a';j--)
                if(strchr("aeiou",j)!=NULL) {swap(s[i],j);break;}
    cout<<s;
}