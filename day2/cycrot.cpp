#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cout<<"Enter the size of the array:";
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll temp,j=0;
	for(ll i=n-1;i>0;i--)
	{
		temp=a[i];
		a[i]=a[i-1];
		a[i-1]=temp;
	}
	for(ll i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
