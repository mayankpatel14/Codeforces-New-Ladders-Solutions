#include "bits/stdc++.h"
using namespace std;


int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);


int n; cin>>n;
int count=0;
vector<int> strength;

for (int i = 0; i < n; ++i)
{
	int k; cin>>k;
	strength.push_back(k);
}

sort(strength.begin(), strength.end());
int l=strength.front(), h=strength.back();

if(n==2 || n==1){
 cout<<0; return 0;
}

for(auto n: strength){
	if(n>l && n<h){
		count++;
	}
}

cout<<count;

}