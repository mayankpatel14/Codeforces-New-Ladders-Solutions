#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif

int n; cin>>n;
vector<int> v;

for (int i = 0; i < n; ++i)
{
	/* code */int k; cin>>k; v.push_back(k);
}

if(accumulate(v.begin(), v.end(), 0)%2 == 0) cout<<"Second";

else
{
	return 0 ;
}



}