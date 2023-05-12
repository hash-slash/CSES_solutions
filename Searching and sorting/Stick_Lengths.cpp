// Problem: Stick Lengths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1074
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	vector<int>a;
	int n; cin>>n; int sum=0;
	for(int i=0;i<n;i++)
	{
		int c; cin>>c; sum+=c;
		a.push_back(c);
	}
	sort(a.begin(),a.end());
	int trg = n/2;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=abs(a[i]-a[trg]);
	}
	cout<<ans;
}