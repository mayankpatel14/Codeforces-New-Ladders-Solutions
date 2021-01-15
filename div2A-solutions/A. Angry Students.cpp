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
   
    
    int t,l;
    string s;
    cin>>t;
    while(t--)
    {
    	cin>>l;
    	cin>>s;
    	int i=0,count=0,maxcount=0;
    	while(i<l)
    	{
    		if (s[i]=='A')
    		{
    			i++;

    			while(s[i]=='P')
    			{
    				
    				count++;i++;

    			}
    			if (count>maxcount)
    			{
    				maxcount=count;
    			}
    			count=0;
    			
    		}
    		else{
    			i++;
    		}
    	}

    	cout<<maxcount<<endl;
    
    }


   

}