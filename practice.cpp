#include<iostream>
using namespace std;
void ordonarevectori1()
{
    int n,i,p;
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
        cout<<v[i]<<" ";
}
void vectoralternativ2()
{
    int n,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    int alternativ=0;
    for(i=1;i<=n-1;i++)
    {
        if(v[i]*v[i+1]==0) alternativ++;
    }
    if(alternativ==(n-1)) cout<<"Vectorul v["<<n<<"] este altenativ";
    else cout<<"Vectorul v["<<n<<"] nu este alternativ";
}
void ordonareoarecarevector3()
{
    int n,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    int pozitiv=0,poz=0,negativ=0,neg=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            poz++;
            if(v[i]>=0) pozitiv++;
        }
        if(i%2==0)
        {
            neg++;
            if(v[i]<0) negativ++;
        }
    }
    if(poz==pozitiv && neg==negativ)
        cout<<"Elementele se afla in ordinea ceruta";
    else cout<<"Elementele nu se afla in ordinea ceruta";
}
void gcdlcm4()
{
    int a,b,c,d;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    c=a;
    d=b;
    while(c!=d)
    {
        if(c>d) c=c-d;
        else d=d-c;
    }
    cout<<"cmmdc="<<c<<endl;
    cout<<"cmmmc="<<a*b/c;
}
void alpinistul5()
{
    int n,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    int pisc=0,vai=0,platforme=0;
    for(i=2;i<=n-1;i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1]) pisc++;
        else if(v[i]<v[i-1] && v[i]<v[i+1]) vai++;
        else if(v[i]==v[i+1]) platforme++;
        if(v[i]==v[i+1] && v[i+1]==v[i+2]) platforme--;
    }
    cout<<"piscuri="<<pisc<<endl<<"vai="<<vai<<endl<<"platforme="<<platforme;
}
void eliminarecifre6()
{
    int n,i,S=0,max=-50000;
    cout<<"nr. de cifre=";cin>>n;
    int c[n];
    for(i=1;i<=n;i++)
    {
        do
        {
            cout<<"c["<<i<<"]=";cin>>c[i];
        } while (c[i]<=0 || c[i]>10);
    }
    for(i=1;i<=n;i++)
    {
        S=S*10+c[i];
    }
    cout<<"Nr initial este "<<S<<endl;
    for(i=1;i<=n-1;i++)
    {
        if(c[i]>=c[i+1]) max=c[i];
        else max=c[i+1];
        cout<<max;
    }
}
void greutate7()
{
    int varsta,inaltime,G;
    string sexul;
    cout<<"varsta=";cin>>varsta;
    cout<<"inaltime=";cin>>inaltime;
    cout<<"sexul: ";cin>>sexul;
    G=50+0.75*(inaltime-150)+(varsta-20)/4;
    if(sexul=="masculin")
    cout<<"Greutatea ideala este de "<<G<<" kg.";
    else if (sexul=="feminin") cout<<"Greutatea ideala este de "<<G*0.9<<" kg.";
    else cout<<"Eroare";
}
void problema8()
{
    int n,i,p;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(p=1;p<=n-1;p++)
        for(i=p+1;i<=n;i++)
            if(v[p]==0)
            {
                int aux=v[p];
                v[p]=v[i];
                v[i]=aux;
            }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void problema9()
{
    int n,i,k;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    do
    {
        cout<<"k=";cin>>k;
    } while (k<1 || k>n);
    for(i=k;i<=n-1;i++)
        v[i]=v[i+1];
    n--;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void problema10()
{
    int n,m,i,j,nr=0;
    cout<<"m=";cin>>m;
    int a[m],b[n];
    for(i=1;i<=m;i++)
    {
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    cout<<"n=";cin>>n;
    for(j=1;j<=n;j++)
    {
        cout<<"b["<<j<<"]=";cin>>b[j];
    }                                      //???????????????????????????
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            do
            {
                if(a[i]<b[j]) nr++;
                else break;
            } while (a[i]<b[j]);
        }
    }
    cout<<nr<<" elemente din vectorul a sunt strict mai mici decat elementele vectorului b";
}
int power(int baseNum, int powNum)
{
    int result=1;
    for(int i=0;i<powNum;i++)
        result=result*baseNum;
    return result;
}

int main()
{
    int a;
    do
    {
        cout<<"Introdu numarul problemei pe care vrei sa o executi: ";cin>>a;
    } while (a<0 || a>13);
    if(a==1) ordonarevectori1();
    else if(a==2) vectoralternativ2();
    else if(a==3) ordonareoarecarevector3();
    else if(a==4) gcdlcm4();
    else if(a==5) alpinistul5();
    else if(a==6) eliminarecifre6();
    else if(a==7) greutate7();
    else if(a==8) problema8();
    else if(a==9) problema9(); 
    else if(a==10) problema10();
    else if(a==11)
    {
        int x,y;
        cout<<"x=";cin>>x;
        cout<<"y=";cin>>y;
        cout<<power(x,y);
    }
    else if(a==12) cout<<&a;
    return 0;
}

