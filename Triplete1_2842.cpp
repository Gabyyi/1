#include <iostream>
using namespace std;
void triplete(int n)
{
    int x,y,z;
    for(y=1;y*y<=n;y++)
        if(n%y==0)
            for(x=0;x<y;x++)
                for(z=n;z>y;z--)
                    if(x+z==n/y) cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main()
{
    int n;
    cin>>n;
    triplete(n);
}