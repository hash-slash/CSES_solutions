// Problem: Collecting Numbers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2216
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int n; cin>>n;
	map<int,int>mop;
	vector<int>a;
	int ans =0;
	// find number to whose left exists max number of numbers greater than it. That+1.
	for(int i=1;i<=n;i++)
	{
		int c; cin>>c;a.push_back(c);mop[i]=c;
	}
	int l=1;
	for(int i=1;i<=n;i++)
	{
		if(l>mop[i])ans++;
		l=mop[i];
	}
	
	cout<<ans;
}