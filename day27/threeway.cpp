#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll s,e;
    cin>>s>>e;
    ll j=0,k=n-1;
    for(ll i=0;i<k;)
    {
        if(a[i]<s)
        {
            ll temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
            i++;
        }
        else if(a[i]>e)
        {
            ll temp=a[k];
            a[k]=a[i];
            a[i]=temp;
            k--;
        }
        else
        i++;

    }
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}