#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k;
	cout<<"ENter the size of the array:";
	cin>>n;
	cout<<"ENter the sum value k:";
	cin>>k;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	unordered_map<int,int> m;
	for(ll i=0;i<n;i++)
	m[a[i]]++;
	ll cnt=0;
	for(ll i=0;i<n;i++)
	{
		cnt+=m[k-a[i]];
		if(k-a[i]==a[i])
		cnt--;
	}
	cout<<cnt/2;
}
	
	
