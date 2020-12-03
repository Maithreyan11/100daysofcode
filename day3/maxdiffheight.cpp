#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the value of k ";
	cin>>k;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cout<<"The max difference is: "<<a[n-1]-k-(a[0]+k);
}
