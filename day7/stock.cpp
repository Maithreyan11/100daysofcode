#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<"ENter the size of the array: ";
	ll n;
	cin>>n;
	ll a[n];
	cout<<"Enter the array elements";
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll j=0,k=0,max=INT_MIN,min=INT_MAX;
	for(ll i=0;i<n;i++)
	{
		if(min>a[i]&&j<=i)
		{
			min=a[i];
			k=i;
		}
	}
	for(ll i=0;i<n;i++)
	{
		if(max<a[i]&&i>=k)
		{
			max=a[i];
			j=i;
		}
	}
	cout<<"\n Ans: ";
	cout<<max-min;
}
	
