#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, s, e;
int endtime = 0;
int ans = 0;

bool comp(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	vector<pair<int, int>> v;
	
	for(int i = 0; i < n; i++){
		cin >> s >> e;
		v.push_back({s, e});
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i = 0; i < n; i++){
		if(v[i].first >= endtime){
			ans += 1;
			endtime = v[i].second;
		}
	}
	cout << ans;
	return 0;
}
