#include<iostream>
using namespace std;
int main()
{
    int n,a[101][101],S[5];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(j>i && j<n-i+1) S[1]=S[1]+a[i][j];
            else if(j>i && j>n-i+1) S[2]=S[2]+a[i][j];
            else if(j<i && j>n-i+1) S[3]=S[3]+a[i][j];
            else if(j<i && j<n-i+1) S[4]=S[4]+a[i][j];
        }
    for(int i=1;i<4;i++)
        for(int j=i+1;j<=4;j++)
            if(S[i]>S[j]) swap(S[i],S[j]);
    for(int i=1;i<=4;i++)
        cout<<S[i]<<" ";
}