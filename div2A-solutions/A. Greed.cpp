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

int n;
cin>>n;

vector<int> r,t,empty;

for (int i = 0; i < n; ++i)
{
	long long k; cin>>k;
	r.push_back(k);
}

for (int i = 0; i < n; ++i)
{
	long long k; cin>>k;
	t.push_back(k);
}

sort(t.begin(),t.end(),greater <int>());
long long tc=t[0]+t[1], cl=accumulate(r.begin(), r.end(),0);

if (tc>=cl)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
//cout<<tc<<" "<<cl;


}