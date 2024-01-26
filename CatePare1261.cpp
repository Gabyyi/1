#include <iostream>
using namespace std;
int main()
{
    int n,K=0;
    do
    {
        cin>>n;
        while(n!=0)
        {
            if(n%2==0) K++;
            cin>>n;
        }
    } while (n<-1000000 && n>1000000);
    if(K==0) cout<<"NU EXISTA";
    else cout<<K;
}