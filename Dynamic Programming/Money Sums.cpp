// Problem: Money Sums
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1745
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	int n; cin>>n; 
	vector<int> a; for(int i=0;i<n;i++){int x; cin>>x; a.push_back(x);}
	sort(a.begin(),a.end());
	int possible[100005]={0};
	possible[0]=1;
	for(int i=0;i<n;i++)
	{
		for(int x=100000;x>=0;x--)
		{
			if((x+a[i])<100005 and possible[x]==1)possible[x+a[i]]=1;
		}
	}
	int count=0;
	vector<int>ans;
	for(int i=1;i<100005;i++)
	{
		if(possible[i])
		{
			count++;
			ans.push_back(i);
		}
	}
	cout<<count<<endl;
	for(auto it:ans)cout<<it<<" ";
	cout<<endl;
	
}