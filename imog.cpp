/*Două numere se numesc oglindite dacă fiecare se obține din celălalt, prin parcurgerea cifrelor acestuia
de la dreapta la stânga. Două numere se numesc impar-oglindite dacă numerele obținute din acestea,
prin îndepărtarea tuturor cifrelor lor pare, sunt oglindite.
Subprogramul imog are trei parametri:
• x și y, prin care primește câte un număr natural din intervalul [0,109];
• rez, prin care furnizează valoarea 1 dacă x și y sunt impar-oglindite sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=523 și y=84356, după apel rez=1,
iar dacă x=523 și y=84536 sau x=523 și y=84576 sau x=40 și y=86, după apel rez=0.*/
#include <iostream>
using namespace std;
void imog(int x, int y, int &rez)
{
    int a=0,b=0,p=1;
    while(x!=0)
    {
        if(x%10%2!=0)
        {
            a=(x%10)*p+a;
            p=p*10;
        }
        x=x/10;
    }
    while(y!=0)
    {
        if(y%10%2!=0)
            b=b*10+y%10;
        y=y/10;
    }
    if(a==b) rez=1;
    return;
}
int main()
{
    int rez=0,x,y;
    cin>>x>>y;
    imog(x,y,rez);
    cout<<rez;
}