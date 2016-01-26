#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	int count=0;
	//rectangles
	for(i=1;i<=sqrt(n);i++)
	for(j=i+1;i*j<=n;j++)
	count++;
	//squares
	count+=sqrt(n);
	cout<<count;
	
}
