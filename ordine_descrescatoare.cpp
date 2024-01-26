#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //100 50 50 50 49 49 36 16 16 12 10 10 9 7 7

    ifstream cin("bac.txt");
    int a,b,k=1;
    cin>>a;
    while(cin>>b)
    {
        if(a==b) k++;
        else if(a!=b)
        {
            if(k==2) cout<<a<<" ";
            k=1;
        }
        a=b;
    }
    if(k==2) cout<<a;
}