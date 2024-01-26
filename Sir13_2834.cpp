#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("sir13.in");
	ofstream cout("sir13.out");
	int x,minp=-1,maxi=1000000000,ok1=1,ok2=1;
	while(cin>>x)
	{
		if(x%2!=0)
		{
			if(maxi>=x) maxi=x;
			else {ok1=0;break;}
		}
		else if(x%2==0)
		{
			if(minp<=x) minp=x;
			else {ok2=0;break;}
		}
	}
	if(ok1==1 && ok2==1) cout<<"DA";
	else cout<<"NU";
}