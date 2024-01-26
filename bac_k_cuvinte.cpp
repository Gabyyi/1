#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,k,j=1;
    char c[11],v[21][11];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        if(strchr("aeiou",c[strlen(c)-1])!=NULL && k!=0) {strcpy(v[j],c);k--;j++;}
    }
    if(k!=0) cout<<"nu exista";
    else
    {
        for(int i=1;i<j;i++)
            cout<<v[i]<<endl;
    }
}