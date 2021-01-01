#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(i,a,n) for(ll i=a;i<n;i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll cnt=0;
        if(s.size()==1)
        {cout<<'0'<<endl;continue;}
        FOR(i,0,s.size())
        {
            if(s[i]=='0')continue;
            if(i<s.size()-1&&s[i]==s[i+1])
            {s[i+1]='0';cnt++;}
            if(i<s.size()-2&&s[i]==s[i+2])
            {s[i+2]='0';cnt++;}
        }
        cout<<cnt<<endl;
    }
}