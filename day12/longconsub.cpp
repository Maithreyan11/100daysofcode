#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	set<ll> a;
	ll k;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		a.insert(k);
	}
	ll cnt=0,maxx=INT_MIN;
	for(auto i=a.begin();i!=a.end();i++)
	{
		ll b=*i;
		cnt=1;
		if(!(a.count(b-1)))
		{
			ll j=1;
			while(a.count(b+j))
			{
				cnt++;
				j++;
			}
				maxx=max(cnt,maxx);
		}	
				
	}
	cout<<maxx<<endl;
}
