#include<iostream>
using namespace std;
void me(int b,int e) //MODULAR EXPONENTIATION
{
	long long res=1;
	while(e)
	{
		if(e%2==1) res=(res*b)%10;
		e=e>>1;
		b=(b*b)%10;
	}
	cout<<res<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b,e;
		cin>>b>>e;
		me(b,e);
	}
	return 0;
}
