#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

string ans="", s; cin>>s;
int k, n=0; cin>>k;

for(int i=0; i<s.length(); i++){
    if(s[i]!='?' || s[i]!='*') n++;
}
if(n==k) cout<<s;
else if(n<k){
    for(int i=0; i<s.length(); i++){
        if(s[i]!='?' || s[i]!='*') ans+=s[i];
        else if(s[i]=='*'){
            int times=n-k;
            while(times--) ans+=s[i-1];
            k=0;
        }
    }
}

cout<<ans;
}
