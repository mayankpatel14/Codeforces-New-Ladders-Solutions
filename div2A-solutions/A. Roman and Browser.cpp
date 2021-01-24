#include "bits/stdc++.h"
using namespace std;


int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k, s=0, t=0, max=0; cin>>n>>k;
vector<int> tabs;

for (int i = 0; i < n; ++i)
{
	int q; cin>>q;
	tabs.push_back(q);	
}

vector<vector<int> > ways;

for(int i=0; i<k; i++){
	vector<int> way; int idx=i;
	while(idx<tabs.size()){
		way.push_back(idx); idx+=k;
	}
	ways.push_back(way);
}

int S=0,T=0;

for(int i=0; i<tabs.size(); i++){
	if (tabs[i]==-1) S++;
	else T++;
}

for(auto j: ways){
	for(auto index: j){
		if (tabs[index]==-1) s++;
		else t++;
	}
	//cout<<max<<' '<<abs((T-t)-(S-s))<<endl;
	if(abs((T-t)-(S-s))>max) max=abs((T-t)-(S-s));
	t=0;s=0;
}

cout<<max<<endl;




}