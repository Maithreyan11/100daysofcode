#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    ll l,r;
    for(ll i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==k)
            {cout<<"True"<<endl;break;}
            else
            {
                if(a[i]+a[l]+a[r]<k)
                l++;
                else if(a[i]+a[l]+a[r]>k)
                r--;
                
            }
            
        }
    }
}