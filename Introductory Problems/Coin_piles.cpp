// Problem: Coin Piles
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1754
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int t; cin>>t; while(t--)
	{
		int a,b; cin>>a>>b;
		if((2*a-b)>=0 and (2*a-b)%3==0 and (2*b-a)>=0 and (2*b-a)%3==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}