#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
#include<string.h>
using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

string h,f;
int t,l=0,r=0;
cin>>t;
cin>>h;
while(t--)
{
	cin>>f;
	if (f.substr(0,3)==h)
		l++;
	else if (f.substr(5,7)==h)
		r++;

	
	//cout<<l<<' '<<r<<' '<<f.substr(5,7)<<endl;
}

if (l>r)
		cout<<"contest"<<endl;
else
	cout<<"home"<<endl;

}