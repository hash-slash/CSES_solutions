// Problem: Bit Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1617
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
int binExp(int a, int b, int m=M) { a = a % m; int res = 1; while (b) { if (b&1) { res=(res * a) % m; } a=(a * a) % m; b>>=1; } return res; }
int32_t main()
{
	int n; cin>>n;
	cout<<binExp(2,n,M)<<endl;
}