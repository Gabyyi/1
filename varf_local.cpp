#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,m=0,varf=0,poz,k=1;
    ifstream fin("bac.txt");
    fin>>n;
    cout<<n<<" ";
    poz=1;
    varf=n;
    while(fin>>n)
    {
        k++;
        if(n>varf)
        {
            cout<<n<<" ";
            varf=n;
            poz=k;
        }
        else if(n==varf && poz==k-1) {cout<<n<<" ";poz=k;}
    }
}

// 7 4 9 10 10 10 8 10 10 8 30