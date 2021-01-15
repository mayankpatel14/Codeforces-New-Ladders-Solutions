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
   
    int l1,l2,max1=0,max2=0;
    cin>>l1;
    vector<int> v1,v2;

    for (int i = 0; i < l1; ++i)
    {
    	int k;cin>>k;
    	if (k>max1)
    	{
    		max1=k;
    	}
    }


    cin>>l2;
    for (int i = 0; i < l2; ++i)
    {
    	int k;cin>>k;
    	if (k>max2)
    	{
    		max2=k;
    	}
    }

    cout<<max1<<' '<<max2;
        



   

}