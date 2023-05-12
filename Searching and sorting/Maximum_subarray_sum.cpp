// Problem: Maximum Subarray Sum
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1643
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	int n; cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int c; cin>>c;
		a.push_back(c);
	}
	long long int sum=0,ans=-9e18;
	for(int i=0;i<n;i++)
	{
		if(sum+a[i]<0)
		{
			ans = max(ans,sum);
			sum=0;
		}
		else {sum+=a[i];ans=max(ans,sum);}
	}
	if(ans==0)
	{
		sort(a.begin(),a.end());
		ans = a[n-1];
	}
	cout<<ans;
}