#include <bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n; cin>>n;

if(n==2){
    cout<<1<<endl<<1<<' '<<1;
    return 0;
}

if(n%2==0){
    cout<<0<<endl;
    cout<<n/2<<' ';
    int l=1, h=n;
    while(l<h) cout<<l<<' '<<h<<' ', l+=2, h-=2;
}
else{
    cout<<1<<endl;
    if((n-1)/2 % 2==1) cout<<n/2 +1<<' ';
    else cout<<n/2<<' ';
    int l=2, h=n;
    while(l<=h) {
        if(l==h) cout<<l<<' ';
        else cout<<l<<' '<<h<<' '; 
        l+=2, h-=2;
    }
}


}
