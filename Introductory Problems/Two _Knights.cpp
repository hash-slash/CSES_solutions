// Problem: Two Knights
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1072
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
	for(int i=1;i<=n;i++)
	{
		int total_squares = pow(i,2);
		int valid_squares = total_squares*(total_squares-1)/2;
		if(i>2)
		{
			valid_squares -= 4*(i-1)*(i-2);
		}
		cout<<valid_squares<<endl;
	}
}
