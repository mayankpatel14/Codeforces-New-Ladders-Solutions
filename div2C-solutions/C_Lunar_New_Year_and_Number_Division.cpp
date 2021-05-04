#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n; cin>>n;
ll ans=0;
vector<ll> v(n);
for(ll& k: v) cin>>k;

sort(v.begin(), v.end());

int l=0, h=v.size()-1;
while(h>l){
    ans+=(v[l]+v[h])*(v[l]+v[h]);
    h--, l++;
}
cout<<ans;

}
