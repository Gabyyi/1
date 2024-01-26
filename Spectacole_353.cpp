#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("spectacole.in");
    ofstream cout("spectacole.out");
    int n,X[101],Y[101],ora=0,k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>X[i]>>Y[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(Y[i]>Y[j]) {swap(X[i],X[j]);swap(Y[i],Y[j]);}
    ora=Y[1];
    for(int i=2;i<=n;i++)
    {
        if(X[i]>=ora)
        {
            ora=Y[i];
            k++;
        }
    }
    cout<<k;
}