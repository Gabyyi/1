#include<iostream>
using namespace std;
int main()
{
    int n,a[21][21],k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==1)
            {
                if(j==1)
                {
                    if(a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j]) k++;
                }
                else if(j==n)
                {
                    if(a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j]) k++;
                }
                else
                {
                    if(a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j]) k++;
                }
            }
            else if(i==n)
            {
                if(j==1)
                {
                    if(a[i][j]>a[i][j+1] && a[i][j]>a[i-1][j]) k++;
                }
                else if(j==n)
                {
                    if(a[i][j]>a[i][j-1] && a[i][j]>a[i-1][j]) k++;
                }
                else
                {
                    if(a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i][j]>a[i-1][j]) k++;
                }
            }
            else if(j==1)
            {
                if(a[i][j]>a[i][j+1] && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j]) k++;
            }
            else if(j==n)
            {
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j]) k++;
            }
            else
            {
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1]) k++;
            }
        }
    cout<<k;
}