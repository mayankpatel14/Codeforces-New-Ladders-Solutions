#include<iostream>
#include "bits/stdc++.h"

using namespace std;
int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> v,v_main;
for (int i = 0; i < 14; ++i)
{
	int k; cin>>k;
	v.push_back(k);
}

int max_score=0, score=0;
v_main=v;

for(int i=0; i<14; i++)
{
	int front=i;
	int s=v[i];

	while(s)
	{
		front++; 
		if (front<14)
		{v[front]++; s--;}
		else
		{
			front=0;v[front]++; s--;
		}
	}

	for (int i = 0; i < 14; ++i)
	{
		if (v[i]%2==0) score+=v[i];
	}

	if(score>max_score) max_score=score;
	cout<<score<<' ';

	score=0;
	v=v_main;

}

cout<<max_score;


}