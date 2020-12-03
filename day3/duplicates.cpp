#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	ll a[n],maxx=INT_MIN;
	for(ll i=0;i<n;i++)
	{cin>>a[i];maxx=max(maxx,a[i]);}
	ll max2=INT_MIN,max_ind;
	for( ll i=0;i<n;i++)
	{
		a[a[i]%(maxx+1)]+=maxx+1;
	}
	for(ll i=0;i<n;i++){
	 if(max2<a[i])
	 {
		 max2=a[i];
		 max_ind=i;
	 }
	 a[i]%=maxx;
 }
	cout<<max_ind<<endl;
}
