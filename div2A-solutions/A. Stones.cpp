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
   
int t,a,b,c,count=0;
cin>>t;

while(t--)
{
	cin>>a>>b>>c;

	if (b>=1 && c>=2)
	{
		while(b>=1 && c>=2)
		{
			b--;
			c-=2;
			count++;
		}
	}

	if (a>=1 && b>=2)
	{
		while(a>=1 && b>=2)
		{
			a--;
			b-=2;
			count++;
		}
	}

	cout<<3*count<<endl;
	count=0;

}








}