#include<iostream>
using namespace std;
bool prim(int x)
{
    if(x<2) return 0;
    else if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(prim(n)) cout<<"DA";
    else cout<<"NU";
}