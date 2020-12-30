#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        ll cnt=0,sum=0,maxx=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
                sum+=abs(a[i][j]);
                maxx=min(abs(a[i][j]),maxx);
                if(a[i][j]<=0)
                {
                    cnt++;
                }
            }
        }
        //cout<<sum<<endl;
        if(cnt%2==0)
        cout<<sum<<endl;
        else
        {
            cout<<sum-2*maxx<<endl;
        }
        
    }
}