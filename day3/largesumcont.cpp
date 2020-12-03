#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<"Enter the size of the array:";
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll sum,start,end,max=INT_MIN;
	for(ll i=0;i<n;i++)
	{
		sum=0;
		for(ll j=i;j<n;j++)
		{
			sum+=a[j];
			if(max<sum)
			{
				max=sum;
				start=i;
				end=j;
			}
		}
	}
	for(ll i=start;i<=end;i++)
	cout<<a[i]<<"\t";
	cout<<"\nSUM: "<<max<<endl;
}
			
