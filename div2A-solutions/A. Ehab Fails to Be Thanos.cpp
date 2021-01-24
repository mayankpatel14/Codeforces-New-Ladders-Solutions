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
vector<int> a;
for (int i = 0; i < 2*n; ++i)
{
	int k; cin>>k;
	a.push_back(k);
}

sort(a.begin(), a.end());

if(accumulate(a.begin(), a.begin()+n, 0)!=accumulate(a.begin()+n, a.begin()+2*n, 0)){
	for(auto n: a) cout<<n<<' ';
}

else cout<<-1;

}