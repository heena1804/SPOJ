#include<iostream>
using namespace std;
int main()
{
	long long 	int a,b;
		cin>>a>>b;
	long long	int sum=0;
		for(long long int i=a;i<=b;i++)
		{
			if(i%2!=0)
			sum+=i; 
		}
		cout<<sum;
	return 0;
}
