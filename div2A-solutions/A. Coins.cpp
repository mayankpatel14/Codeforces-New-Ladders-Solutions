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

int n,s,c=0,d;
cin>>n>>s;

while(s>0)
{
	if (s>=n)
	{
		c+=s/n;
		s%=n;
	}

	else
	{
		c++;
		break;
	}
	
}

cout<<c;

}