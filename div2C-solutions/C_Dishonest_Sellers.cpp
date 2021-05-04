#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k, ans=0; cin>>n>>k;
vector<int> a(n), b(n);
for(int& q : a) cin>>q;
for(int& q : b) cin>>q;

vector<pair<int,int>> diff;
for(int i=0; i<n; i++){
    diff.push_back(make_pair(b[i]-a[i],i));
}
sort(diff.begin(), diff.end(), greater<pair<int,int>>());
//for(auto i: diff) cout<<i.first<<" "<<i.second<<endl;
int i=0;
while(i<n){
    if(k>0) ans+=a[diff[i].second];
    else if(k<=0 && diff[i].first>0) ans+=a[diff[i].second];
    else ans+=b[diff[i].second];
    k--, i++;
}
cout<<ans;

}
