#include "bits/stdc++.h"
using namespace std;


int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);

int l,r; cin>>l>>r;

if(r-l>2) cout<<2;
else if(r-l==2 && l%2==0 &&r%2==0) cout<<2;
else cout<<l;




}