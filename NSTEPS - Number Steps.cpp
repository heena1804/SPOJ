#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x!=y && y!=x-2) 
		{
		cout<< "No Number"<<endl;
		continue;	
		}
		if(x%2==0 && y%2==0)
		{
			cout<<x+y<<endl;
		}
		else if(x%2!=0 && y%2!=0) cout<<x+y-1<<endl;
	}
	return 0;
}
