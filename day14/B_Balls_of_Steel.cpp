#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll x[n],y[n];
        for(ll i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        ll flag=0,j=0;
        for(ll i=0;i<n;i++)
        {
            for( j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if((abs(x[i]-x[j])+abs(y[i]-y[j]))>k)
                    break;
                }
            }
                if(j==n)
                flag=1;
        }
        if(flag==1)
        cout<<"1"<<endl;
        else
        {
            cout<<"-1"<<endl;
        }
        

    }
}