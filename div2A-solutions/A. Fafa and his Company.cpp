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
   
    int n,f=0;
    cin>>n;

    for (int i=1; i<=n/2; i++)
    {
    	if (n%i==0)
    	{
    		f++;
    	}
    }
    
    
    cout<<f;
   


   

}