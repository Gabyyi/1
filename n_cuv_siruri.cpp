#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //se citesc n cuvinte
    //afisati rasturnatul sirului obtinut prin concatenarea acelor cuvinte de lungime para
    //ce incep cu litera mica, intre cuvinte concatenati cate un spatiu
    //6
    //mama Are 3 mere Mari rosii=> mama mere=> erem amam
    int n,i;
    char s[51],total[1001]="";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(strlen(s)%2==0 && s[0]>='a' && s[0]<='z')
        {
            strcat(total,s);
            strcat(total," ");
        }
    }
    int l=strlen(total);
    if(l==0)
        cout<<"nu exista";
    else 
    {
        //pe poz l o sa fie NULL
        //pe poz l-1 va fi spatiu
        total[l-1]='\0';
        cout<<total<<'\n';
        strrev(total);
        cout<<total;
    }
}