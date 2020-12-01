#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll j=0,k=0;
	for(ll i=0;i<n;i++)
	{

		
		if(a[i]==k)
		{
			ll temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			j++;
		}
		if(i+1==n)
		{
			i=0;
			k++;
			if(k==3)
			break;
		}
	}
	for(ll i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
