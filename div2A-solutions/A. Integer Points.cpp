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

long long t,n,m,c=0,odd1=0,even1=0,odd2=0,even2=0;

cin>>t;
while(t--)
{
   cin>>n;
   for (int i = 0; i < n; ++i)
   {
   	/* code */int k; cin>>k;
   		if (k%2==0)
   			even1++;
   		else
   			odd1++;
   }
   cin>>m;
   for (int i = 0; i < m; ++i)
   {
   	/* code */int k; cin>>k;
   		if (k%2==0)
   			even2++;
   		else
   			odd2++;
   }

   cout<<even1*even2+odd2*odd1<<endl;
   odd1=0,even1=0,odd2=0,even2=0;

}



}