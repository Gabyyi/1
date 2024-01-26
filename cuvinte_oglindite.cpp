#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],*p,c[50][101],cuv[101];
    int k=0,gasit=0;
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        k++;
        strcpy(c[k],p);
        p=strtok(NULL," ");
    }
    for(int i=1;i<=k;i++)
    {
        int x=strlen(c[i]);
        if(x%2!=0)
        {
            strrev(c[i]);
            strcpy(cuv,c[i]);
        }
        if(strcmp(cuv,c[i])!=0) gasit=1;

    }
    if(gasit==1)
        for(int i=1;i<=k;i++)
            cout<<c[i]<<" ";
    else cout<<"nu exista";
}