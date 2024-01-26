#include<iostream>
#include<cstring>
using namespace std;
void varianta1(char s[11], char text[101])
{
    char c[51][101],*p;
    int k=0; //nr de cuvinte din text
    int gasit=0;
    p=strtok(text," ");
    while(p!=NULL)
    {
        k++;
        strcpy(c[k],p);
        p=strtok(NULL," ");
    }
    // cuvintele vor fi c[1], c[2], ... ,c[k]
    for(int i=2;i<=k-1;i++)
    {
        if(strcmp(c[i],s)==0)
        {
            cout<<c[i-1]<<" "<<c[i+1]<<endl;
            gasit=1;
        }
    }
    if(gasit==0) cout<<"nu exista";
}
void varianta2(char s[11], char text[101])
{
    char c1[101],c2[101],c3[101],*p;
    p=strtok(text," ");
    strcpy(c1,p); //primul cuvant din text
    p=strtok(NULL," "); //trecem la cuvantul urmator
    strcpy(c2,p); //al doilea cuvant
    p=strtok(NULL," ");
    int gasit=0;
    while(p!=NULL)
    {
        strcpy(c3,p);
        if(strcmp(c2,s)==0) 
        {
            cout<<c1<<" "<<c3;
            gasit=1;
        }
        strcpy(c1,c2);
        strcpy(c2,c3);
        p=strtok(NULL," ");
    }
    if(gasit==0) cout<<"nu exista";
}
int main()
{
    char s[11], text[101];
    cin.get(s,11);
    cin.get();
    cin.get(text,101);
    int a;
    cin>>a;
    if(a==1) varianta1(s, text);
    if(a==2) varianta2(s, text);
}