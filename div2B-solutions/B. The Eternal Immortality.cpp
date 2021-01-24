#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);

int a,b;cin>>a>>b;
int m=1;
int i=a+1;
bool check5=false,check2=false;

while(i<=b)
{
	int last=i%10;
	m*=last;
	m%=10;i++;
	if (last==2 || m==2)
		check2=true;
	if (last==5 || m==5)
		check5=true;

	if(check5 && check2)
	{
		m=0; break;
	}
}

cout<<m;


}