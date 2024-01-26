#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("sir147.in");
	ofstream cout("sir147.out");
	int n,a=1,b=4,c;
	while(cin>>n)
	{
		if(n==1 || n==4) cout<<n<<' ';
		else
		{
			while(2*b-a<=n)
			{
				c=2*b-a;
				a=b;
				b=c;
			}
			if(c==n) {cout<<n<<' ';}
		}
	}
}