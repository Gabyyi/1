#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*char s[51],*p,v[25][51];
    char c[4][101]={"COLEGIUL","LICEUL","NATIONAL","TEORETIC"};
    int k=0,ok=0;
    cin.get(s,51);
    p=strtok(s," ");
    while(p!=NULL)
    {
        k++;
        strcpy(v[k],p);
        p=strtok(NULL," ");
    }
    for(int i=1;i<=k;i++)
        {
            int j=strlen(v[i])-1;
            if(strchr(v[i],'.')!=NULL) v[i][j]='\0';
        }
    for(int i=1;i<=k;i++)
        for(int j=0;j<=4;j++)
            if(strstr(c[j],v[i])) strcpy(v[i],c[j]);
    for(int i=1;i<=k;i++)
        cout<<v[i]<<" ";*/
    
    
    
    char s[51],*p,nou[70];
    cin.get(s,51);
    p=strtok(s," ");
    while(p!=NULL)
    {
        int l=strlen(p);
        if(p[l-1]=='.')
        {
            if(p[0]=='C') strcat(nou,"COLEGIUL");
            else if(p[0]=='L') strcat(nou,"LICEUL");
            else if(p[0]=='N') strcat(nou,"NATIONAL");
            else strcat(nou,"TEORETIC");
        }
        else strcat(nou,p);
        p=strtok(NULL," ");
        if(p!=NULL) strcat(nou," ");
    }
    cout<<nou;
}
/*COLEG. NATIONAL DE INFORMATICA
COLEGIUL LICEUL NATIONAL TEORETIC*/