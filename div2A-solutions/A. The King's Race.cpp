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

long long n,w=0,b=0;
cin>>n;
long long x,y;
cin>>x>>y;

if (x+y<=n+1)
	cout<<"White";
else
	cout<<"Black";

}