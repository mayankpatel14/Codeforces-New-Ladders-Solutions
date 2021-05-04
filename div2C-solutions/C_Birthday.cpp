#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n; cin>>n;
list<int> l;
vector<int> v(n);
for(int& k: v) cin>>k;

sort(v.begin(), v.end(), greater<int>());

for(int i=0; i<n; i++){
    if(i%2==0) l.push_front(v[i]);
    else l.push_back(v[i]);
}

for(auto i: l) cout<<i<<' ';

}
