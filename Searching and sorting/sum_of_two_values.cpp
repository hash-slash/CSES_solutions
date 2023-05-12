// Problem: Sum of Two Values
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1640
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int32_t main()
{
	int n,x; cin>>n>>x;
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int c; cin>>c;
		a.push_back(c);
	}
	map<int,int>mop;
	for(int i=1;i<n;i++)
	{
		mop[a[i]]=i;
	}
	int first = 0,sec=-1,i=0;
	for(i=0;i<n-1;i++)
	{
		if(mop[x-a[i]]>0){sec = mop[x-a[i]];break;}
	}
	if(sec>i)cout<<i+1<<" "<<sec+1<<endl;
	else cout<<"IMPOSSIBLE";
}