#include<iostream>
#include<cmath>
using namespace std;
void stergere163()
{
    int n,i,k;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    k=1;
    while(k<=n)
    {
        for(i=1;i<=n;i++)
        {
            int div,j;
            div=0;
            for(j=1;j<=v[i];j++)
            {
                if(v[i]%j==0) div++;
            }
            if(div==2)
            {
                for(i=k;i<=n-1;i++)
                    v[i]=v[i+1];
                n--;
            }
            else k++;
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void ElimRep2734()
{
    int n,i,j;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(v[i]==v[j])
            {
                for(int k=j;k<=n-1;k++)
                    v[k]=v[k+1];
                n--;j--;
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void inserareinainte160()
{
    int n,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    int p=1;
    while(p<=n)
    {
        for(i=1;i<=n;i++)
        {
            if(sqrt(v[i])==int(sqrt(v[i])))
            {
                for(i=n;i>=p+1;i--)
                    v[i+1]=v[i];
                v[p]=sqrt(v[p]);
                n++;
                p=p+2;
            }
            else p++;
        }
    }
    for(i=1;i<=n;i++)
     cout<<v[i]<<" ";
}
void aceeasi_paritate1365()
{
    int n,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    int p=1;
    while(p<=n)
    {
        for(i=1;i<=n-1;i++)
        {
            if((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2==1 && v[i+1]%2==1))
            {
                for(i=n;i>=p+1;i--)
                    v[i+1]=v[i];
                v[p+1]=(v[p]+v[p+2])/2.0;
                n++;p++;
            }
            else p++;
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void aceeasi_paritate1366()
{
    int n,i,j;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(j=1;j<+n;j++)
    {
        int p=1;                                                  //???
        while(p<=n)
        {
            for(i=1;i<=n-1;i++)
            {
                if((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2==1 && v[i+1]%2==1))
                {
                    for(i=n;i>=p+1;i--)
                        v[i+1]=v[i];
                    v[p+1]=(v[p]+v[p+2])/2.0;
                    n++;p++;
                }
                else p++;
            }
        }
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
        cout<<" "<<endl;
    }
}
void PermCirc162()
{
    int n,i,j,k;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<" "<<endl;
    for(j=1;j<=n;j++)
    {
        k=v[1];
        for(i=2;i<=n;i++)
            v[i-1]=v[i];
        v[n]=k;
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
        cout<<" "<<endl;
    }
}
void Numere596()
{
    int n,i,j,x,nr=0;
    cin>>n;
    int v[25000];
    for(i=1;i<=n;i++)
        cin>>v[i];
    do
    {
        int gasit=0;
        for(i=1;i<=n-1;i++)
        {
           
                if(v[i]==v[i+1])                          //???
                {
                    for(j=i;j<=n-2;j++)
                        v[j]=v[j+2];
                    n=n-2;nr++;
                    gasit=1;
                }
                //else p++;
            //}
        }while(gasit==1);
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
    }
    cout<<" "<<endl;
    cout<<nr;
}

int main()
{
    int a;
    do
    {
        cout<<"Introdu nr. problemei: ";cin>>a;
    } while(a<0 || a>8);
    if(a==1) stergere163();
    else if(a==2) ElimRep2734();
    else if(a==3) inserareinainte160();
    else if(a==4) aceeasi_paritate1365();
    else if(a==5) aceeasi_paritate1366();
    else if(a==6) PermCirc162();
    else if(a==7) Numere596();
}