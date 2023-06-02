// Problem: Minimizing Coins
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1634
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
vector<int>dp(1000006,1e9);
int32_t main()
{
	int n,m; cin>>n>>m;
	vector<int>a;
	for(int i=0;i<n;i++){int c; cin>>c; a.push_back(c);}
	dp[0]=0;
	for(auto it:a)dp[it]=1;
	for(int i=1;i<=m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>a[j])dp[i]=min(dp[i],dp[i-a[j]]+dp[a[j]]);
		}
	}
	if(dp[m]!=1e9)cout<<dp[m]<<endl;
	else cout<<-1<<endl;
}