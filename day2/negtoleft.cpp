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
	cin>>a[i];
	ll j=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			ll temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j++;
		}
	}
	for(ll i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
