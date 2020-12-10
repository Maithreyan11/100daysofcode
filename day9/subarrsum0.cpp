#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<"Enter the size of the array: ";
	ll n;
	cin>>n;
	ll a[n];
	cout<<"Enter the array elements: ";
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll sum=0,flag=0;
	unordered_set<int> sset;
	for(ll i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum==0||sset.find(sum)!=sset.end())
		flag=1;
		
		sset.insert(sum);
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
}
		
