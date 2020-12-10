#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	cout<<"Enter the size of the array: ";
	ll n;
	cin>>n;
	cout<<"Enter the array elements:"; 
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll i=1,j=0;
	while(i<n&&j<n)
	{
		for(ll k=0;k<n;k++)
	    //cout<<a[k]<<" ";
	//cout<<endl;
	if(a[j]<0)
	{j+=2;continue;}
	else if((i==j||(j>i&&a[i]<0))&&i%2==0)
	i++;
		else if(a[i]<0)
		{
			ll temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j+=2;
		}
		i++;
	}
	cout<<"Array after operations : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
