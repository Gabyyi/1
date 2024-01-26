#include<iostream>
using namespace std;
struct ore
{
    int h,m,s;
}o1,o2;
int main()
{
    int o=0,m=0,s=0;
    cin>>o1.h>>o1.m>>o1.s;
    cin>>o2.h>>o2.m>>o2.s;
    cout<<o1.h<<": "<<o1.m<<": "<<o1.s<<endl;
    cout<<o2.h<<": "<<o2.m<<": "<<o2.s<<endl;
    cout<<o1.h*3600+o1.m*60+o1.s<<endl;
    cout<<o2.h*3600+o2.m*60+o2.s<<endl;
    s=o1.s+o2.s;
    m=o1.m+o2.m;
    o=o1.h+o2.h;
    while(s>60)
    {
        m++;
        s=s-60;
    }
    while(m>60)
    {
        o++;
        m=m-60;
    }
    cout<<o<<": "<<m<<": "<<s;
}