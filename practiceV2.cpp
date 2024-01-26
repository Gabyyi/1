#include<iostream>
#include<cmath>
using namespace std;

void Sume237()
{
    int n,i,s;
    cout<<"n=";
    cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        do
        {
            s=0;
            for(i=1;i<=n;i++)
                s=s+v[i];
            cout<<s<<endl;
            n--;
        } while(n!=0);
    }
}
void Zone238()
{
    int n,i,j;
    cout<<"n=";
    cin>>n;
    int v[n];
    int m=n*3,p=n*2;
    for(i=1;i<=m;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=m;i++)
    {
        for(i=1;i<=n;i++)
            for(j=m;j>=p;j--)
            {
                int gasit=1;
                while(gasit==1)
                {
                    if(v[i]%2==0)
                        if(v[j]%2==1)
                        {
                            int aux=0;
                            aux=v[i];
                            v[i]=v[j];
                            v[j]=aux;
                            gasit=0;
                        }
                        else if(v[j]%2!=1)
                        {
                            for(j=m-1;j>=p;j--)
                                gasit = 1;
                        }
                        else cout<<"Error 404. Not found.";
                }
            }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void NumarMunmte189()
{
    int n,i,x,j;
    do
    {
        cout<<"n=";cin>>n;
    } while (n<1 || n>10);
    for(i=1;i<=n;i++)
    {
        do
        {
            cout<<"x=";cin>>x;
        } while (x<100 || x>2000000000);
        int c[j],nr=0,aux1=0,aux2=0;
        aux1=x;
        aux2=aux1;
        while(aux2!=0)
        {
            aux2%=10;
            nr++;
            aux2/=10;
        }
        while(aux1!=0)
        {
            for(j=1;j<=nr;j++)
            {
                c[j]=aux1%10;
            }
            aux1/=10;
        }
        for(j=1;j<=nr-2;j++)
        {
            if(c[j]<c[j+1] && c[j+1]>c[j+2])
                cout<<"Nr. "<<x<<" este de tip munte"<<endl;
        }
    }
}
void UEMM1883()
{
    int n,i;
    cout<<"n=";
    cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n-1;i++)
    {
        if(v[i+1]>v[i]) v[i]=v[i+1];
        else if(v[i+2]>v[i+1]) v[i]=v[i+2];
        else if(v[i]<v[i+1]) v[i]=-1;
        v[i+n-i]=-1;
    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
}
void PozitieX249()
{
    int n,x,i,p;
    cout<<"x=";cin>>x;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(p=1;p<=n-1;p++)
        for(i=p+1;i<=n;i++)
            if(v[p]>v[i])
            {
                int aux=v[p];
                v[p]=v[i];
                v[i]=aux;
            }
    for(i=1;i<=n;i++)
    {
        if(v[i]==x) cout<<"Poztia nr. "<<x<<"in sirul ordonat crescator este "<<i;
        else cout<<"Nr. "<<x<<" nu apare in sir";break;
    }
}
void Unice270()
{
    int n,i,p=0,aux,nr=0;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(p=1;p<=n-1;p++)
        for(i=p+1;i<=n;i++)
            if(v[p]>v[i])
            {
                int aux=v[p];
                v[p]=v[i];
                v[i]=aux;
            }
    for(i=1;i<=n-2;i++)
    {
        if(v[i]!=v[i+1] && v[i+1]!=v[i+2]) nr++;
    }
    for(i=1;i<=2;i++)
    {
        if(v[i]!=v[i+1]) nr++;
    }
    for(i=n;i>=n-1;i--)
    {
        if(v[i]!=v[i-1]) nr++;
    }
    cout<<nr;
}
void maxsim165()
{
    int n,i,j,s,s1,s2,poz1,poz2;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n/2;i++)
    {
        for(j=n;j>=n/2;j--)
        {
            s=0;s1=0;s2=0;poz1=0;poz2=0;
            s1=v[i]+v[j];
            s2=v[i+1]+v[j-1];
            if(s2<=s1)
            {
                s=s2;
                poz1=i+1;
                poz2=j-1;
            }
            else
            {
                s=s1;
                poz1=i;
                poz2=j;
            }
            i++;
        }
    }
    cout<<s<<" "<<poz1<<" "<<poz2;
}
void ElemPP132()
{
    int n,i,aux1=0,aux2=0,nr,x,y;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        y=v[i];
        aux1=y;
        aux2=aux1;
        nr=0;
        while(aux2!=0)
        {
            aux2%=10;
            nr++;
            aux2/=10;
        }
        if(nr==2)
        {
            if(sqrt(y)==int(y)) cout<<y<<" ";
        }
        else
        {
            x=aux1/10^(nr-2);
            if(sqrt(x)==int(x)) cout<<y<<" ";
        }
    }
}
void PalindromSD2375()
{
    int n,c,s;
    cout<<"n=";cin>>n;
    while(n!=0)
    {
        int m=n;
        while(m!=0)
        {
            c=m%10;
            s=s*10+c;
            m=m/10;
        }
        if(s==n) cout<<n;
        cout<<"n=";cin>>n;
    }
}
int main()
{
    int a;
    do
    {
        cout<<"Introdu numarul problemei pe care vrei sa o executi: ";cin>>a;
    } while (a<0 || a>9);
    if(a==1) Sume237();
    else if(a==2) Zone238();
    else if(a==3) NumarMunmte189();
    else if(a==4) UEMM1883();
    else if(a==5) PozitieX249();
    else if(a==6) Unice270();
    else if(a==7) maxsim165();
    else if(a==8) ElemPP132();
    else if(a==9) PalindromSD2375();
    return 0;
}