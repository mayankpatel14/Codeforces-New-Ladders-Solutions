#include <bits/stdc++.h>
#include<math.h>
using namespace std;

bool perfect(int n){
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return false;
    }
    else {
        return true;
    }
}

bool check(vector<int> a, int n, int p){
    if(n<=0 && p>0) return perfect(p);
    if(n<=0 && p<0) return false; 
    if(p<0) return check(a,n-1,p) || check(a,n-1,a[n-1]);

    return check(a,n-1,p) || check(a,n-1,p*a[n-1]);
}

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int t; cin>>t;

while(t--){

int n; cin>>n;
vector<int> v(n);
for(int& k: v) cin>>k;

if(check(v,v.size(),-1)) cout<<"YES"<<endl;
else cout<<"NO"<<endl; 
//cout<<check(v,v.size(),-1)<<endl;
//cout<<perfect(12)<<endl;
}

}
