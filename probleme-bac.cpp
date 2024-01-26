#include<iostream>
#include<cstring>
using namespace std;
void p5()
{
    char s1[101],s2[101],s3[101],pc;
    cin.get(s1,101);
    cin.get();
    cin.get(s2,101);
    int l=strlen(s1),j=0;
    if(strlen(s2)!=l)
    {
        cout<<"NU";
        return 0;
    }
    for(int i=1;i<l;i++)
    {
        if(strcmp(s1,s2)==0)
        {
            cout<<"DA";
            return 0;
        }
        pc=s1[0];
        strcpy(s3,s1+1);
        strcpy(s1,s3);
        s1[l-1]=pc;s1[l]='\0';
    }
    if(strcmp(s3,s2)==0) cout<<"Da";
    else cout<<"Nu";
}
bool verific(char s[],char p[])
{
    char *a=strstr(s,p);
    if(a==NULL) return 0;
    int l=strlen(p);
    int poz=a-s;
    if(poz==0)
    {
        if(s[l]==' ') return 1;
    }
    else if(s[poz-1]==' ' && (s[poz+l]=='\0' || s[poz+l]==' ')) return 1;
    return 0;
}
void p4()
{
    char s1[201],s2[201],s3[101][201],*p;
    cin.get(s1,201);
    cin.get();
    cin.get(s2,201);
    p=strtok(s1," ");
    int gasit=0,k=0;
    while(p!=NULL)
    {
        if(verific(s2,p)==1)
            strcpy(s3[k++],p);
        p=strtok(NULL," ");
    }
    for(int i=0;i<k-1;i++)
        for(int j=i+1;j<k;j++)
            if(strcmp(s3[i],s3[j])>0) swap(s3[i],s3[j]);
    cout<<s3[0]<<" ";
    for(int i=1;i<k;i++)
        if(strcmp(s3[i],s3[i-1])!=0) cout<<s3[i]<<" ";
}
void p3()
{
    //la examenul de bacalaureat voi sustine proba de informatica si vreau nota 10
    char s[201],c[16],*p,c1[201];
    int k,nr;
    cin.get(s,201);
    cin.get();
    cin.get(c,16);
    cin>>k;
    p=strtok(s," ");
    while(p!=NULL)
    {
        nr=0;
        strcpy(c1,p);
        for(int i=1;i<strlen(c1);i++)
            if(strchr(c,c1[i])!=NULL) nr++;
        if(nr>=k) cout<<c1<<" ";
        p=strtok(NULL," ");
    }
}
void p2()
{
    //bacalaureatul la informatica este simplu
    char s[101],*p,c[101];
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        strcpy(c,p);
        for(int i=1;i<strlen(c)-1;i++)
            if((strchr("aeiou",c[i])==0 && strchr("aeiou",c[i+1])==0) ||
            (strchr("qwrtypsdfghjklzxcvbnm",c[i])==0 && strchr("qwrtypsdfghjklzxcvbnm",c[i+1])==0)) swap(c[i],c[i+1]);
        cout<<c<<" ";
        p=strtok(NULL," ");
    }
}
void p1()
{
    char t[201],s[16],*p,c[201];
    cin.get(t,201);
    cin.get();
    cin.get(s,16);
    p=strtok(t," ");
    while(p!=NULL)
    {
        strcpy(c,p);
        int l=strlen(s);
        if(strncmp(c,s,l)==0) cout<<c<<endl;
        p=strtok(NULL," ");
    }
}
int main()
{
    int a;
    cin>>a;
    cin.get();
    if(a==1) p5();
    if(a==2) p4();
    if(a==3) p3();
    if(a==4) p2();
    if(a==5) p1();
}