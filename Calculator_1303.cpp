#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char c;
    cin>>c;
    switch(c)
    {
        case '+':{cout<<a+b;break;}
        case '-':{cout<<max(a,b)-min(a,b);break;}
        case '*':{cout<<a*b;break;}
        case '/':{cout<<max(a,b)/min(a,b);break;}
    }
}