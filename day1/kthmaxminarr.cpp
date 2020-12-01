#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cout<<"Enter the size of the array:";
	cin>>n;
	ll a[n],k;
	for(ll i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter k: ";
	cin>>k;
	sort(a,a+n);
	cout<<k<<"th largest element is :"<<a[n-k]<<endl;
	cout<<k<<"th smallest element is :"<<a[k-1];
}
