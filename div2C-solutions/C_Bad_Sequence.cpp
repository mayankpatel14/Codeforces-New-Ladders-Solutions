#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n; cin>>n;
string s; cin>>s;
stack<char> stack;

if(s.length()%2==1){cout<<"No"; return 0;} // if string has unequal length of open and closing brackets

int k=0,sign=0;
for(int i=0; i<s.length(); i++){
    if(s[i]=='(') k++;
    else k--;
    sign=min(k,sign);
}

if(k==0 && sign>=-1) cout<<"Yes";
else cout<<"No";


}
