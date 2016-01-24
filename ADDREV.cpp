#include<iostream>
using namespace std;
int r(int n)
{
	int rev=0;
	while(n)
	{
		rev=rev*10;
		rev+=n%10;
		n=n/10;
	}
	return rev;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<r(r(a)+r(b))<<endl;
		
	}
	return 0;
}
