#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*char s[101];
    cout<<"s=";cin.get(s,102); //gets(s) 
    int nr=0;
    for(int i=0;i<strlen(s);i++)
        if(strchr("aeiouAEIOU",s[i])!=NULL)
        //if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            nr++;
    cout<<"nr vocale: "<<nr<<endl;
    cout<<s<<strlen(s);*/


    /*char a[101];
    int lit=0,car=0,cif=0,spatii=0;
    cin.get(a,102);
    for(int i=0;i<=strlen(a);i++)
    {
        if((a[i]>='a' && a[i]<'z')||(a[i]>='A' && a[i]<='Z')) lit++;
        else if(a[i]>='0' && a[i]<='9') cif++;
        else if(a[i]==' ') spatii++;
        else car++;
    }
    cout<<lit<<" "<<cif<<" "<<spatii<<" "<<car;*/


    /*char s[81];
    int nr=0;
    cin.get(s,82);
    for(int i=0;i<=strlen(s);i++)
        if(s[i]==' ') nr++;
    cout<<nr+1;*/


    /*char s[201];
    cin.get(s,202);
    int nr=0;
    for(int i=0;i<=strlen(s);i++)
    {
        char cuvant[201]="";
        while(i<strlen(s) && s[i]==' ') i++;
        int nrc=0;
        while(i<=strlen(s) && s[i]!=' ')
        {
            cuvant[nrc]=s[i];
            nrc++;
            i++;
        }
        cuvant[nrc]=0;//cuvant[nrc]=NULL; //cuvant[nrc]='\0';
        if(nrc!=0)
        {
            nr++;
            cout<<cuvant<<endl;
        }
    }
    cout<<nr;*/
    
}