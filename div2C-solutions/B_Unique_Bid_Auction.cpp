#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int t; cin>>t;
while(t--){
    int n; cin>>n;
    vector<int> v(n);
    unordered_map<int,int> m;
    for(int& k:v) cin>>k, m[k]++;
    vector<int> selected;
    for(auto i: m){
        if(i.second==1) selected.push_back(i.first);
    }

    if(selected.size()==0){
        cout<<-1<<endl; continue;
    }
    

    int ele_req=*min_element(selected.begin(), selected.end()), id=-1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==ele_req){
            id=i+1; break;
        }
    }

    cout<<id<<endl;
}


}
