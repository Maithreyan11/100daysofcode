#include<bits//stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m;
	cout<<"Enter the size of 2 arrays:";
	cin>>m>>n;
	ll a[m],b[n];
	for(ll i=0;i<m;i++)
	cin>>a[i];
	for(ll i=0;i<n;i++)
	cin>>b[i];
	sort(a,a+m);
	sort(b,b+n);
	for(ll i=0;i<m;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(a[i]>b[j])
			{
				ll temp=b[j];
				b[j]=a[i];
				a[i]=temp;
			}
		}
	}
	sort(a,a+m);
	sort(b,b+n);
	for(ll i=0;i<m;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(ll i=0;i<n;i++)
	cout<<b[i]<<" ";
}
	
