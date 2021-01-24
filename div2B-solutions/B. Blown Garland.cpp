#include<iostream>
#include <bits/stdc++.h>

using namespace std;
class Node { 
public: 
    int data; 
    Node* next; 
};

int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif

string base="1111",s; cin>>s;
int r=0,b=0,y=0,g=0;



for(int i=0; i<s.length(); i++)
{
	if(s[i]!='!')
		base[i%4]=s[i];
}

for(int i=0; i<s.length(); i++)
{
	if(s[i]=='!')
	{
		if(base[i%4]=='R') r++;
		else if (base[i%4]=='B') b++;
		else if (base[i%4]=='Y') y++;
		else if (base[i%4]=='G') g++;
	}
}

//cout<<base<<endl;
cout<<r<<' '<<b<<' '<<y<<' '<<g;

}