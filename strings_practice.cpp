//Acum este sambata, este frumos afara, dar ieri cand m-am intalnit cu Alex, Andrei, Elena si Ana a fost cam inorat din pacate.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[501],*p,v[251][51];
    int k=0;
    cin.get(s,502);
    p=strtok(s," ,.");
    while(p!=NULL)
    {
        if(strchr("aeiouAEIOU",p[0])!=NULL)
        {
            k++;
            strcpy(v[k],p);
        }
        p=strtok(NULL," .,");
    }
    char a[251][51];
    for(int i=1;i<=k;i++)
    {
        strcpy(a[i],v[i]);
        for(int j=0;j<strlen(a[i]);j++)
            if(a[i][j]>='A' && a[i][j]<='Z') a[i][j]=a[i][j]+32;
    }
    /*for(int i=1;i<=k;i++)
        cout<<v[i]<<" "<<a[i]<<endl;*/
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(strcmp(a[i],a[j])>0)
            {
                swap(a[i],a[j]);
                swap(v[i],v[j]);
            }
    for(int i=1;i<=k;i++)
        cout<<v[i]<<'\n';
}