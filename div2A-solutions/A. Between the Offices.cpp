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
   int l,i,sf=0,fs=0;
	cin>>l;    
    string s;
    cin>>s;
    i=1;
    char prev=s[0];

    while(i<l){
    	if (prev=='S' && s[i]=='F'){
    		sf++;
    	}

    	else if (prev=='F' && s[i]=='S'){
    		fs++;
    	}



    	prev=s[i];
    	i++;
    }

    if (sf>fs){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO";
    }
    
    
    
   


   

}