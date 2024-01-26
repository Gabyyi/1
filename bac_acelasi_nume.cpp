#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    /*char s[251],x[251],v[126][251],*p;
    int ok=0;
    int k=1;
    cin.get(s,251);
    cin.get();
    cin>>x;
    p=strtok(s,";");
    while(p!=NULL)
    {
        strcpy(v[k],p);
        k++;
        p=strtok(NULL,";");
    }
    for(int i=1;i<k;i++)
    {
        p=strtok(v[i]," ");
        if(strcmp(p,x)==0)
        {
            p=strtok(NULL," ");
            cout<<p<<" ";
            ok=1;
        }
    }
    if(ok==0) cout<<"NU";*/

    //SAU

    char s[251],pren[11],*p;
    int L=0,gasit=0;
    cin.getline(s,251);
    cin>>pren;
    L=strlen(pren);
    p=strtok(s,";");
    while(p!=NULL)
    {
        if(p[0]==' ') strcpy(p,p+1);
        if(strstr(p,pren)==p && p[L]==' ')
        {
            gasit=1;
            cout<<p+L+1<<" ";
        }
        p=strtok(NULL,";");
    }
    if(gasit==0) cout<<"NU";
}