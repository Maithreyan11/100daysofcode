#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void reverseArray(ll i,ll j,ll arr[]){
	while(i<j)
	{
		ll temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
	}
}
int main()
{
	ll n;
	cout<<"Enter the length of the array:"; 
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];

	ll i=n-2;
	while(i>=0 && a[i]>a[i+1])i--;
	if(i==-1)
	reverseArray(0,n-1,a);
	
	for(ll j=n-1;j>i;j--)
	{
		if(a[j]>a[i])
		{
			ll temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			break;
		}
	}
			
		cout<<"The next permutation is: ";
	for(ll k=0;k<n;k++)
	cout<<a[k]<<" ";
}

		
	
