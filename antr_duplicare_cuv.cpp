#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],nou[201],*p;
    int k=1,ok=1,gasit=0;
    nou[0]='\0';
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        ok=1;
        for(int i=0;i<strlen(p);i++)
            if(strchr("aeiou",p[i])==0) {ok=0;break;}
        if(ok==1)
        {
            gasit=1;
            strcat(nou,p);
            strcat(nou," ");
            k++;
            strcat(nou,p);
            strcat(nou," ");
            k++;
        }
        else
        {
            strcat(nou,p);
            strcat(nou," ");
            k++;
        }
        p=strtok(NULL," ");
    }
    nou[strlen(nou)-1]='\0';
    if(gasit==0) cout<<"nu exista";
    else cout<<nou;
}