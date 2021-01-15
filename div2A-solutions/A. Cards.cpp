#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
    
    int z=0,n=0,l;
	cin>>l;    
    string s;
    cin>>s;
    l=l-1;

    while(l>=0){
    	if (s[l]=='z'){
    		z++;
    	}
    	else if (s[l]=='n'){
    		n++;
    	}
    	l--;
    }
    //cout<<z<<' '<<n;

    for (int i=0; i<n;i++){
    	cout<<1<<" ";
    }

    for (int i=0; i<z;i++){
    	cout<<0<<" ";
    }

}