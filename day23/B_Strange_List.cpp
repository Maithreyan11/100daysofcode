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
        ll n,x;
        cin>>n>>x;
        vector<pair<ll,ll>> a(n);
        FOR(i,0,n)
        {
            cin>>a[i].first;
            a[i].second=1;
        }
        FOR(i,0,a.size())
        {
            if(a[i].first%x!=0)
            {
                break;
            }
            a.push_back(make_pair(a[i].first/x,a[i].second*x));
        }
            ll cnt=0;
            for(pair<ll,ll> p :a)
            {
                cnt+=p.first*p.second;
            }
            cout<<cnt<<endl;
    }
}