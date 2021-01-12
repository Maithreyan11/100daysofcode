#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(i,a,b) for(ll i=a;i<b;i++)
const int N = 1e6 + 1;

int t, n, m;
long long ans;
vector <int> ant[N];
map <int, int> mp;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        vector<ll> dist;
        FOR(i,0,n)
        {
            ll m;
            cin>>m;
            while(m--)
            {
                ll k;
                cin>>k;
                mp[abs(k)]++;
                if(mp[abs(k)]==1)
                dist.push_back(abs(k));
                ant[i].push_back(k);
            }
        }
        FOR(i,0,n)
        {
            ll neg=0,pos=0;
            vector<pair<int,int>> s;
            for (auto p : ant[i])
            {
                if (p < 0) neg++, s.push_back({abs(p), -1});
                else pos++, s.push_back({abs(p), 1});
            }
            sort(s.begin(),s.end());
            for(auto it:s)
            {
                if(it.second==-1)neg--;
                else pos--;
                if(mp[it.first]>1)
                {
                    if(it.second==-1)ans+=neg;
                    else ans+=pos;
                }
                else
                {
                    if(it.second==1)ans+=neg;
                    else ans+=pos;
                }
                
            }
        }
        for(auto p:dist)
        {
            if(mp[p]>1)
            ans++;
        }
        cout<<ans<<endl;
        for (int i = 0; i < n; i++) ant[i].clear();
        mp.clear();
    }
}