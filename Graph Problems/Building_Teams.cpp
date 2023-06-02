// Problem: Building Teams
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1668
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

bool col = 1;

// 1 -> red 0-> blue

set<int>red,blue;
//int count;

int dfs(int i, bool col, vector<vector<int>>& st, vector<bool>& vis, int& count)
{
	int k=1;
	if(vis[i]==true)
	{
		if(col==1 and blue.count(i))return 2;
		else if(col==0 and red.count(i))return 2;
		return 1;
	}
	else
	{
		vis[i]=true;
		count++;
		if(col==1)red.insert(i);
		else blue.insert(i);
		for(auto it:st[i])
		{
			k*=dfs(it,!col,st,vis,count);
		}
	}
	return k;
}

int32_t main()
{
	int n,m; cin>>n>>m;
	vector<vector<int>>st(n);
	vector<bool>vis(n,false);
	vector<int>m2;
	int count=0;
	for(int i=0;i<m;i++)
	{
		int x,y; cin>>x>>y; --x;--y;
		st[x].push_back(y);
		st[y].push_back(x);
		m2.push_back(x);
	}
	int l =1;
	while(count!=n)
	{
		for(auto it:vis){
		if(vis[it]==false)
		l= dfs(it,0,st,vis,count);
		if(l!=1){cout<<"IMPOSSIBLE";return 0;}
		}
	}
	if(red.size()+blue.size()>n)cout<<"IMPOSSIBLE";
	else
	{
		vector<int>ans(n,-1);
		for(auto it:red)
		{
			ans[it]=1;
		}
		for(auto it:blue)
		{
			if(ans[it]==1){cout<<"IMPOSSIBLE";return 0;}
			else ans[it]=2;
		}
		for(auto it:ans)
		{
			if(it!=-1)cout<<it<<" ";
			else cout<<1<<" ";
		}
	}
}