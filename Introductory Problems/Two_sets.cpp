// Problem: Two Sets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1092
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	int n; cin>>n;
	vector<int>v1,v2;
	int rem = n%4;
	if(rem==0)
	{
		cout<<"YES"<<endl;
		for(int i=1;i<=n/2;i++)
		{
			if(i%2){v1.push_back(i);v1.push_back(n-i+1);}
			else {v2.push_back(i);v2.push_back(n-i+1);}
		}
		cout<<v1.size()<<endl;
		for(auto it:v1)cout<<it<<" ";
		cout<<endl;
		cout<<v2.size()<<endl;
		for(auto it:v2)cout<<it<<" ";
		cout<<endl;
	}
	else if(rem==1){cout<<"NO"<<endl;}
	else if(rem==3)
	{
		cout<<"YES"<<endl;
		v1.push_back(1);v1.push_back(2);v2.push_back(3);
		for(int i=1;i<=(n-3)/2;i++)
		{
			if(i%2){v1.push_back(i+3);v1.push_back(n-i+1);}
			else
			{
				v2.push_back(i+3);v2.push_back(n-i+1);
			}
		}
		cout<<v1.size()<<endl;
		for(auto it:v1)cout<<it<<" ";
		cout<<endl;
		cout<<v2.size()<<endl;
		for(auto it:v2)cout<<it<<" ";
		cout<<endl;
	}
	else cout<<"NO"<<endl;
}