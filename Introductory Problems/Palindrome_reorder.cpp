// Problem: Palindrome Reorder
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1755
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	string s; cin>>s;
	map<char,int>mop;
	string mid="";
	string ans="";
	int store=0;
	int count=0;
	for(int i=0;i<s.size();i++)mop[s[i]]++;
	for(auto it:mop)
	{
		if(it.second%2!=0 and s.size()%2==0){cout<<"NO SOLUTION";return 0;}
		else if(it.second%2!=0 and s.size()%2){mid=it.first;store+=it.second;count++;}
		else 
		{
			for(int i=0;i<(it.second)/2;i++)
			{
				ans+=it.first;
			}
		}
	}
	if(count>1 and s.size()%2)cout<<"NO SOLUTION"<<endl;
	string temp=ans;
	for(int i=0;i<store;i++)
	{
		ans+=mid;
	}
	reverse(temp.begin(),temp.end());
	ans+=temp;
	cout<<ans<<endl;
}