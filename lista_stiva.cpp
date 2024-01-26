#include<iostream>
#include<string.h>
using namespace std;
struct carte
{
    char a[15];
    int an;
    float pret;
};carte c;
int main()
{
    int NrMax=50;
    int stiva[50];
    int n=0;
    int opt,nr=0,nr_imp=0,s=0;
    do
    {
        cout<<"1. Adaugare\n";
        cout<<"2. Stergere\n";
        cout<<"3. Afisare\n";
        cout<<"4. Valoare\n";
        cout<<"5. Nr. carti\n";
        cout<<"6. Nr. carti imprumutate\n";
        cout<<"0. Iesire\n";
        cout<<"Alegeti o optiune: ";cin>>opt;
        if(opt==1)
        {
            if(n>NrMax) cout<<"Stiva este plina\n";
            else
            {
                n++;
                nr++;
                cout<<"Introduceti elementul nou:\n";
                cin.get();
                cout<<"Numele autorului: ";cin.get(stiva[n].c.a,16);
                cout<<"An aparitie: ";cin>>stiva[n].c.an;
                cout<<"Pret carte: ";cin>>stiva[n].c.pret;
            }
        }
        if(opt==2)
        {
            if(n==0) cout<<"Nu se poate sterge\n";
            else
            {
                n--;
                nr_imp++;
            }
        }
        if(opt==3)
        {
            if(n==0) cout<<"Stiva este vida";
            for(int i=1;i<=n;i++)
            {
                cout<<"Numele autorului: "<<stiva[n].c.a<<endl;
                cout<<"An aparitie: "<<stiva[n].c.an<<endl;
                cout<<"Pret carte: "<<stiva[n].c.pret<<endl;
            }
        }
        if(opt==4)
        {
            for(int i=1;i<=n;i++)
                s=s+stiva[i].c.pret;
            cout<<"Valoarea cartilor este: "<<s<<endl;
        }
        if(opt==5)
        {
            cout<<"Nr. de carti este: "<<nr<<endl;
        }
        if(opt==6)
        {
            cout<<"Nr. carti imprumutate: "<<nr_imp<<endl;
        }
    } while (opt!=0);
}