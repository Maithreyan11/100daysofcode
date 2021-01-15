#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {cin>>a[i];
    }
    ll result=0;
    for(ll i=0;i<n;i++)
    {
        ll l=INT_MIN,r=INT_MIN;
        for(ll j=0;j<i;j++)
        {
            l=max(l,a[j]);
        }
        for(ll j=i+1;j<n;j++)
        {
            r=max(r,a[j]);
        }
        ll k=min(l,r);
        ll w=k-a[i];
        if(w<0)
        w=0;
        result+=w;
    }
    cout<<result<<endl;
}