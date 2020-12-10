#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<"Enter the sizes of threee arrays:";
	ll b,n,m;
	cin>>b>>n>>m;
	ll a1[b],a2[n],a3[m];
	cout<<"Enter the array elements in the sorted array:";
	for(ll i=0;i<b;i++)
	cin>>a1[i];
	for(ll i=0;i<n;i++)
	cin>>a2[i];
	for(ll i=0;i<m;i++)
	cin>>a3[i];
ll i=0,j=0,k=0;
cout<<"Common elements are: ";
while(i<b&&j<n&&k<m)
{
	if(a1[i]==a2[j]&&a2[j]==a3[k])
	{
		cout<<a1[i]<<" ";
		i++;j++;k++;
	}
	else if(a1[i]<a2[j])
	i++;
	else if(a2[j]<a3[k])
	j++;
	else
	k++;
}
}
