#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

ios_base::sync_with_stdio(false); cin.tie(NULL);


int n,l,r; cin>>n>>l>>r;

long long s=n-l+1;

s+=2*(pow(2,l-1)-1);

cout<<s<<' ';

long long d=0;
d+=(n-r+1)*pow(2,r-1);

d+=pow(2,r-1)-1;
cout<<d;

}