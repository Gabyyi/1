#include <iostream>
using namespace std;
int main()
{
    int x,y,C=0;
    cin>>x;
    if(x!=0)
    {
        cin>>y;
        while(y!=0)
        {
            if(abs(x)%10==abs(y)%10) C++;
            x=y;
            cin>>y;
        }
    }
    cout<<C;
}