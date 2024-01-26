#include<iostream>
#include<cstring>
using namespace std;
void f()
{
    char s[101];
    cin.get(s,101);
    int S=0;
    for(int i=0;i<strlen(s);i++)
    	if(strchr("0123456789",s[i])!=NULL) S=S+s[i]-'0';
    cout<<S;
}
void g()
{
    char s[101],*p;
    cin.get(s,101);
    int S=0;
    p=strtok(s," ,");
    while(p!=NULL)
    {
    	if(p[0]>='0' && p[0]<='9')
    	{
    		int nr=0;
    		for(int i=0;i<strlen(p);i++)
    			nr=nr*10+p[i]-'0';
    		S=S+nr;
        }
    	p=strtok(NULL," ,");
    }
    cout<<S;
}
int main()
{
    //f()   <=>   suma cifrelor din sirul s
    //g()   <=>   suma numerelor din sirul s
    char s[101];
    
    f();
    cout<<endl;
    g();
}