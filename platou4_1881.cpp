#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("bac.txt");
    ifstream fin("platou4.in");
    ofstream fout("platou4.out");
    int n,k=0,i=0,j=0;
    fin>>n;
    while(n%2!=0)
    {
        i++;
        k++;
        fin>>n;
    }
    k++;
    while(fin>>n)
    {
        if(n%2!=0) j++;
        else if(n%2==0 && j!=0) j=0;
        k++;
    }
    fout<<k-i-j;
}