#include<iostream>
using namespace std;
int main()
{
long long	int t3,l3,s,n,d,a,i;
int t;
	cin>>t;
	while(t--)
	{
	
	cin>>t3>>l3>>s;
	n=(2*s)/(t3+l3);
	d=(l3-t3)/(n-5);
	a=t3-2*d;
	cout<<n<<endl;
	for(i=1;i<=n;i++)
	cout<<a+(i-1)*d<<" ";
}
return 0;
}
