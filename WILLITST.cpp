#include<iostream>
using namespace std;
int main()
{
long long	int n;
	cin>>n;
	while(n && n!=1)
	{
	if(n%2==0) n=n/2;
	else
	{
	
	cout<<"NIE"<<endl;
	return 0;
}
	}
	cout<<"TAK"<<endl;
	return 0;
}
