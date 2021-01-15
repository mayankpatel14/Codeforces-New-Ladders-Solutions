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
   
    int a,b;
    cin>>a;
    cin>>b;
    int diff=abs(b-a);

    if (diff%2==0)
    {
    	diff=diff/2;
    	cout<<(diff*(diff+1));
    }
    else
    {
    	diff=diff/2;
    	cout<<((diff*(diff+1)))+diff+1<<endl;
    }
    
    

}