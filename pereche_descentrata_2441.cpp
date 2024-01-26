#include<iostream>
#include<cstring>
using namespace std;
int pereche(char s1[], char s2[])
{
    int n=strlen(s1),m=strlen(s2);
    if(n>m) swap(s1,s2);
    if(n!=m-1 || n%2==0) return 0;
    for(int i=0;i<=n/2;i++)
        if(s1[i]!=s2[i]) return 0;
    if(s2[n/2]!=s2[n/2+1]) return 0;
    for(int i=n/2+1;i<n;i++)
        if(s1[i]!=s2[i+1]) return 0;
    return 1;
}
int main()
{
    char s[101],*p,v[51][101];
    int k=0;
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        k++;
        strcpy(v[k],p);
        p=strtok(NULL," ");
    }
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(pereche(v[i],v[j])==1) {cout<<"DA";return 0;}
    cout<<"NU";    
}