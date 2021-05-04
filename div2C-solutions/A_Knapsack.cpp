#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int t; cin>>t;
while(t--){

ll n,w; cin>>n>>w;
vector<pair<ll,ll>> v;
for(ll i=0; i<n; i++){
    ll k; cin>>k;
    v.push_back(make_pair(k,i));
}

sort(v.begin(), v.end(), greater<pair<ll,ll>>());
vector<ll> ans; int curr_cap=0;

for(int i=0; i<v.size(); i++){
    if(curr_cap+v[i].first<w/2) ans.push_back(v[i].second+1), curr_cap+=v[i].first;
    else if(curr_cap+v[i].first<=w && curr_cap+v[i].first>=w/2) {ans.push_back(v[i].second+1), curr_cap+=v[i].first; break;}
}

if(curr_cap<w/2) cout<<-1;
else{
    cout<<ans.size()<<endl;
    for(auto k: ans) cout<<k<<' ';
}

cout<<endl;
}

}
