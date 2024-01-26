#include<iostream>
using namespace std;
int main()
{
    int a[7][7];
    for(int i=1;i<=6;i++)
        for(int j=1;j<=6;j++)
        {
            if(i==1 || i==4) a[i][j]=j%3+1;
            else if(i==2 || i==5)
            {
                if(j==2 || j==5) a[i][j]=6;
                else a[i][j]=j%3+2;
            }
            else if(i==3 || i==6) a[i][j]=j%3;
        }
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}