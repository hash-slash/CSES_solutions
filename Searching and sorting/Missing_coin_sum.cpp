// Problem: Missing Coin Sum
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2183
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n; cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int c; cin>>c; a.push_back(c);
	}
	sort(a.begin(),a.end());
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		if(dp[i-1]<a[i-1]){cout<<dp[i-1];return 0;}
		else dp[i]=dp[i-1]+a[i-1];
	}
	cout<<dp[n];
}