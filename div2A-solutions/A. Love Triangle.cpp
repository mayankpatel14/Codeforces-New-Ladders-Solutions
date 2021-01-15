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
   
    int l,k,e=0;
    cin>>l;
    vector<int> v;

    for (int i = 0; i < l; ++i)
    {
    	cin>>k;
    	v.push_back(k-1);
    }

    for (int i = 0; i < l; ++i)
    {
    	if(v[v[v[i]]]==i)
    	{
    		e=1;break;
    	}

    	
    }

    if (e==1){
    		cout<<"YES";
    	}

    	else{
    		cout<<"NO";
    		
    	}
    
    
   


   

}