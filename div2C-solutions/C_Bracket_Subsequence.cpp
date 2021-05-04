#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n,k; cin>>n>>k;
string s; cin>>s;
k=n-k;
stack<char> st;

for(int i=0; i<s.length(); i++){
    if(st.empty()) st.push(s[i]);
    else if(st.top()=='(' && s[i]==')' && k>0){
        st.pop(); 
        k-=2;
    }
    else st.push(s[i]);
    //cout<<s[i];
}
string ans="";
while(!st.empty()) ans=st.top()+ans, st.pop();
cout<<ans;

}
