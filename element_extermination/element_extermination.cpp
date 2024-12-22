#include <bits/stdc++.h>
#define int long long
using namespace std;

int t, n, x;
vector<string> ans;
vector<int> v;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> x;
			v.push_back(x); 
		}
		if(v[0] < v.back()){
			ans.push_back("YES");
		} else {
			ans.push_back("NO");
		}
		v.clear();
	}
	
	for(auto i: ans){
		cout << i << "\n";
	}
	
	
	return 0;
}

