#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll a[n],neg=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll prod=a[0];
			ll maxval=a[0];
		ll minval=a[0];
	for(ll i=1;i<n;i++)
	{
		if(a[i]<0)
		swap(maxval,minval);
		maxval=max(a[i],maxval*a[i]);
		minval=max(a[i],minval*a[i]);
		prod=max(maxval,prod);
	}
	cout<<prod<<endl;
}
