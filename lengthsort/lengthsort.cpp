#include <bits/stdc++.h>
using namespace std;
#define int long long

bool comp(pair<string, int> a, pair<string, int> b){
	
	if(a.first.size() == b.first.size()){
		return a.second < b.second;
	}else{	
		return a.first.size() > b.first.size();
	}
	
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<pair<string, int>> word(n);
	for(int i = 0; i < n; i++){
		cin >> word[i].first;
		word[i].second = i;
	}
	// cout << word[0].first << ", " << word[0].second << '\n';
	sort(word.begin(), word.end(), comp);
	for(int i = 0; i < word.size(); i++){
		cout << word[i].first<< "\n";
	}
	return 0;
}
