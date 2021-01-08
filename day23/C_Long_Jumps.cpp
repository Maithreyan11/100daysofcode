#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(i,a,b) for(ll i=a;i<b;i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        FOR(i,0,n)
        cin>>a[i];
        ll maxx=INT_MIN,ans=0;
        FOR(i,0,n)
        {
            ans=0;
            if(i+a[i]>=n)
            ans+=a[i];
            else
            {
                ll j=i;
                while(j<n)
                {
                    ans+=a[j];
                    j+=a[j];
                }
            }
            maxx=max(maxx,ans);
        }
        cout<<maxx<<endl;
    }
}