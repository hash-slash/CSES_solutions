// Problem: Two Sets II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1093
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;
int dp[62626][501]={0};
int32_t main()
{
	// equal sum in both sets
	// n*(n+1)/4 in both sets.
	// Basic knapsack but in two places.
	// If we do knapsack on one place we can compute the other.
	// Don't need to do actual distribution, just find number of ways
	
	// Why do I still love Srija ?
	
	// if n is 500, max sum in a set can be = 500*(501)/4 = 125*501 = 62,625.
	
	int n; cin>>n;
	
	int target = n*(n+1)/2;
	
	if(target%2){cout<<0<<endl;return 0;}
	
	target/=2;
	
	// each state of dp represents number of ways to achieve sum of x using i integers
	// Recurrence relation for every x, dp[x] = sum_over (dp(x-i)) where i ranges from 1 to n.
	
	//dp[sum][number of integers used]
	
	dp[0][0]=1;
	
	for(int sum=0;sum<=target;sum++)
	{
		for(int i=1;i<n;i++)
		{
			if(sum-i>=0){dp[sum][i]=(dp[sum-i][i-1]+dp[sum][i-1])%M;}
			else dp[sum][i]=dp[sum][i-1];
			// take or not take that integer 
		}
	}
	cout<<dp[target][n-1]<<endl;
	
}