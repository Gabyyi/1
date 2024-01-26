#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int x,n,maxp=-1,maxi=-1,minp=1000001,mini=1000001;
    //ifstream fin("paritar.in");
    //ofstream fout("paritar.out");
    cin>>n;//fin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;//fin>>x;
        if(x%2==0 && x>maxp) maxp=x;
        else if(x%2!=0 && x>maxi) maxi=x;
    }
    for(int i=n+1;i<=2*n;i++)
    {
        cin>>x;//fin>>x;
        if(x%2==0 && x<minp) minp=x;
        else if(x%2!=0 && x<mini) mini=x;
    }
    if(maxp<mini && maxi<minp) cout<<"DA";//fout<<"DA";
    else cout<<"NU";//fout<<"NU";
}
