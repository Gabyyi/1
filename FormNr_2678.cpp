#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[256],*p;
    int S=0;
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        int nr=0;
        for(int i=0;i<strlen(p);i++)
        {
    	    if(p[i]>='0' && p[i]<='9')
    	    	nr=nr*10+p[i]-'0';
            else {S=S+nr;nr=0;}
        }
        S=S+nr;
    	p=strtok(NULL," ");
    }
    cout<<S;
}