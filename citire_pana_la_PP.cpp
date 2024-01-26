#include<iostream>
#include<cmath>
using namespace std;
int rasturnat(int x)
{
    int c,s=0;
    while(x!=0)
    {
            c=x%10;
            s=s*10+c;
            x=x/10;
    }
    return s;
}
int pp(int x)
{
    int r=sqrt(x);//r fiind int va retine parte intreaga a radicalului
    if(r*r==x) return 1;
    return 0;
}
int main()
{
    //se citesc nr pana la introducerea unui pp. sa se determine cate nr palindrom sunt
    int x,nr=0;
    cin>>x;
    while(pp(x)==0)
    {
        if(x==rasturnat(x)) nr++;
        cin>>x;
    }
    cout<<nr;
}