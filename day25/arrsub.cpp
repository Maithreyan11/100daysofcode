#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        set<ll> a,b;
        ll j,flag=0;
        for(ll i=0;i<m;i++)
        {cin>>j;a.insert(j);}
        for(ll i=0;i<n;i++)
        {cin>>j;b.insert(j);}
        if(n<=m)
        {
            for(auto it:b)
            {
                if(!a.count(it))
                flag=1;
            }
            if(flag==1)
            cout<<"No"<<endl;
            else
            {
                cout<<"Yes"<<endl;
            }
            
        }
        else
        {
            cout<<"No"<<endl;
        }
        

    }
}