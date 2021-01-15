#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define FOR(i,a,b) for(ll i=a;i<b;i++)
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    FOR(i,0,n)
    cin>>a[i];
    ll x;
    cin>>x;
    ll j=0,sum=0,ans=n+1,i=0;
    while(i<n)
    {
        while(sum<=x)
        sum+=a[i++];
            while(sum>x&&j<n)
            {
        if(i-j<ans)
        ans=i-j;
        sum-=a[j++];
            }
        
    }
    cout<<ans<<endl;

}