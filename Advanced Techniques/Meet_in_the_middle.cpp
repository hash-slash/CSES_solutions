// Problem: Meet in the Middle
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1628
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int n,x; cin>>n>>x;
	vector<int>a,b;
	
	for(int i=0;i<n/2;i++)
	{
		int x; cin>>x; a.push_back(x);
	}
	
	// check for each subset -> 2^40 operations
	// Divide the array and check for both parts, y in left and x-y for right -> done in 2^20 operations.
	
	for(int i=n/2;i<n;i++)
	{
		int x; cin>>x; b.push_back(x);
	}
	
	set<int>s;
	int left[10005]={0};
	s.insert(0);
	// for(auto it:s)cout<<it<<" ";
	// cout<<endl;
	left[0]=1;
	for(int i=0;i<a.size();i++)
	{
		//cout<<left.size()<<endl;
		vector<int>temp;
		for(auto it:s)
		{
			//cout<<it<<" ";
			left[it+a[i]]+=1;
			temp.push_back(it+a[i]);
		}
		for(auto it:temp)s.insert(it);
		//cout<<endl;
	}
	
	s.clear();
	int right[10005]={0};
	right[0]=1;
	s.insert(0);
	for(int i=0;i<b.size();i++)
	{
		vector<int>temp;
		for(auto it:s)
		{
			right[it+b[i]]+=1;
			temp.push_back(it+b[i]);
		}
		for(auto it:temp)s.insert(it);
	}
	int ans=0;
	for(auto it:s)
	{
		if(it<=x and left[x-it]>0){ans+=left[x-it]*right[it];}
	}
	cout<<ans<<endl;
}