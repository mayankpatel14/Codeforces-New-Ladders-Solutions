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



string a,b,die,add;
cin>>a>>b;
int t;
cin>>t;

cout<<a<<' '<<b<<endl;

while(t--)
{
	cin>>die>>add;
	if (a==die)
		a=add;
	else
		b=add;

	cout<<a<<' '<<b<<endl;
}


}