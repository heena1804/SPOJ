#include<iostream>
using namespace std;


int main()
{
	int n,i,x;
	cin>>n;
for(i=0;i<n;i++)
	{
		cin>>x;
		
	int count=0;
	while(x>=5)
	{
		count+=x/5;
		x=x/5;
		
	}
	cout<<count<<endl;
}
	return 0;
}
