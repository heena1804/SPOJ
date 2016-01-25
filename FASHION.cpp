#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		int n,i;
		cin>>n;
		int a[n], b[n];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++)
		{
			sum+=a[i]*b[i];
		}
		cout<<sum<<endl;
		
	
	}
	return 0;
}
