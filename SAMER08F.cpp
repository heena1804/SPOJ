#include<iostream>
using namespace std;
int main()
{
	int n;
	while(true)
	{
		cin>>n;
		if(n==0) break;
		else{
			cout<<n*(n+1)*(2*n+1)/6<<endl;
		}
	}
	return 0;
}
