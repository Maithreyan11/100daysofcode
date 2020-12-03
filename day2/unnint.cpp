#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k;
	cout<<"Enter the sizes of two arrays: ";
	cin>>n>>k;
	cout<<"Enter the two arrays:"<<endl;
	ll a[n],b[k];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	for(ll i=0;i<k;i++)
	cin>>b[i];
	vector<int> c;
	vector<int> d;
	for(ll i=0;i<n;i++)
	{
		c.push_back(a[i]);
	}
	for(ll i=0;i<k;i++)
	{
		ll flag=0;
		for(ll j=0;j<c.size();j++)
		{
			if(b[i]==c[j]){
				d.push_back(b[i]);
			flag=1;
			break;
		}
		}if(flag==0)
		c.push_back(b[i]);
	}
	cout<<"UNION"<<endl;;
	for(ll i=0;i<c.size();i++)
	cout<<c[i]<<"\t";
	cout<<"\nINTERSECTION"<<endl;
	for(ll i=0;i<d.size();i++)
	cout<<d[i]<<"\t";
}
