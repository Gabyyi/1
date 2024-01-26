#include<iostream>
#include<cstring>
using namespace std;
struct
{
    char nume[50];
    int m,s;
}elev[30];
int main()
{
    int n,min,sec;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin.get();
        cin.get(elev[i].nume,51);
        cin>>elev[i].m>>elev[i].s;
    }
    cin>>min>>sec;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++) 
            if(strcmp(elev[i].nume,elev[j].nume)>0) swap(elev[i],elev[j]);
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(elev[i].m>=elev[j].m)
                if(elev[i].s>elev[j].s) swap(elev[i],elev[j]);
    for(int i=1;i<=n;i++)
    {
        if(elev[i].m<=min && elev[i].s<=sec)
            cout<<endl<<elev[i].nume<<" "<<elev[i].m<<":"<<elev[i].s;
    }
}

/*
7
Pop Alin
4 23
Rus Dan
4 23
Stan Darius
5 4
Pop Tudor Flaviu
4 12
Rusu Alin Dan
5 23
Sas Mihai
4 39
Rusu Paul
4 23
4 40
*/