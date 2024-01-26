#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],c[101],s1[101];
    cin>>s>>c;
    if(strlen(s)!=strlen(c)) cout<<"cod incorect";
    else
    {
    	int j=0;
    	for(int i=strlen(c)-1;i>=0;i--)
    		if(strchr("02468",c[i])!=NULL) {s1[j]=s[i];j++;}
    	for(int i=0;i<strlen(c);i++)
    		if(strchr("13579",c[i])!=NULL) {s1[j]=s[i];j++;}
    	s1[j]='\0';
    	cout<<s1;
    }
}