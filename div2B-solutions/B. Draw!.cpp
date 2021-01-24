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

int n,cnt=1; cin>>n;
vector<pair<long long,long long> > scores={make_pair(0,0)};
for (int i = 0; i < n; ++i)
{
	pair<long long, long long> p;
	cin>>p.first>>p.second;
	scores.push_back(p);
}

pair<long long, long long> p=scores.back(); long long max_goal=min({p.first,p.second});

int i=1;
for(int j=1; j<scores.size(); j++){
	pair<long, long> p={i,i};
	pair<long,long> score_prev=scores[j-1], score=scores[j];
/*
	while(p.first>=score_prev.first && p.first<=score.first 
							&& p.second>=score_prev.second && p.second>=score.second){
		cnt++; i++; pair<long, long> p={i,i};
	}
	i++;
	*/
	for(int l=max({score_prev.first, score_prev.second}); l!=min({score.first, score.second}); l++)
		{
			if (p.first>=score_prev.first && p.first<=score.first 
									&& p.second>=score_prev.second && p.second>=score.second){
				cout<<p.first<<" "<<p.second<<endl; i++;
			}
		
		}

}

//cout<<cnt;

}