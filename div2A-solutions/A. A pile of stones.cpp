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


	int l,curr=0;
	cin>>l;
	string s;
	cin>>s;
	for (int i = 0; i < l; i++)
	 {
		if (s[i]=='+')
			curr++;
		else
			curr--;
		if (curr<0)
			curr=0;
	 }  
	 //cout<<plus<<' '<<sub;

	 cout<<curr;


}