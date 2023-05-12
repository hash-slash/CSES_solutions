// Problem: Two Sets II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1093
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
int mod_add(int a, int b, int m=M) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }


int32_t main()
{
	int n; cin>>n;
	int ss = (n*(n+1))/2;
	if(ss%2)cout<<0<<endl;
	else
	{
		int trg = ss/2;
		int dp[n][trg+1]={{0}};
		dp[0][0]=1;
		cout<<dp[0][1]<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<trg+1;j++)
			{
				//cout<<i<<" "<<j<<" "<<dp[i-1][j-1]<<endl;
				if(j-i>=0)
				{
					dp[i][j] = dp[i-1][j];
					(dp[i][j] += dp[i-1][j-i]) %= M;
				}
				else dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[n-1][trg]<<endl;
	}
}