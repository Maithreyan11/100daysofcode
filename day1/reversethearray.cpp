#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void swap(char *a,char *b)
{
	char temp;;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	string str;
	cout<<"Enter a string:"<<endl;
	cin>>str;
	ll n=str.size();
	for(ll i=0;i<n/2;i++)
	{
		swap(&str[i],&str[n-i-1]);
	}
	cout<<str;
}
