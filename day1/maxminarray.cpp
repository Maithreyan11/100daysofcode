#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cout<<"Enter the size of the array:";
	cin>>n;
	ll a[n],maxx=INT_MIN,minn=INT_MAX;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
		minn=min(minn,a[i]);
	}
	cout<<"Maximum element in the array:"<<maxx<<endl;
	cout<<"Minimum element in the array:"<<minn<<endl;
}
