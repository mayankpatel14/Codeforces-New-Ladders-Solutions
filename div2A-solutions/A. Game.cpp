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
   
	vector< int > v;
	int l;
	cin>>l;
	
	for (int i=0; i<l; i++)
	{
		int k;cin>>k;
		v.push_back(k);
	}    

	sort(v.begin(),v.end());

	if (l%2==0)
	{
		cout<<v[(l/2)-1];
	}
	else
	{
		cout<<v[l/2];
	}
	
	
	/*
	for (int i = 0; i < l; i++)
	{
		cout<<v[i]<<' ';
	}
	*/

}
