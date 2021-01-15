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

int l,a,p;
cin>>l;
cin>>a;
cin>>p;

cout<<min({l, a/2, p/4})*7<<endl;






}