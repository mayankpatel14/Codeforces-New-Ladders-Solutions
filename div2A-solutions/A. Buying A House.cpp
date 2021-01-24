#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

long long n,m,k,l,r;
cin>>n>>m>>k;
vector<int> h;

for (int i = 0; i < n; ++i)
{
	long long k; cin>>k;
	h.push_back(k);
}
l=m-1;r=m-1;

while(1>0)
{
	l--;r++;
	if (l>=0)
	{
		if (h[l]<=k)
			cout<<10*(m-l+1);
			break;
	}

	else if (r<h.size())
	{
		if (h[r]<=k)
			cout<<10*(r-m+1);
			break;
	}

	if(l<0 && r>h.size())
		break;
	
	cout<<l<<" "<<r<<endl;

}

}