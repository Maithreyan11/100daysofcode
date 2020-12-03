#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--){
	ll n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll i=0,count=0;;
	while(i<n-1)
	{
		i+=a[i];
		count++;
	}
	cout<<count<<endl;
}
}
