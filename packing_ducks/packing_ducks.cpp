#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, k;
int arr[205];
vector<int> sum[205];

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	sum[0].push_back(0);
	for(int i = 0; i < n; i++){
		for(int x: sum[i]){
			sum[i+1].push_back(x); /// Dont take
			sum[i+1].push_back(x + arr[i]); /// Take
		}
	}
	
	int ans = 0;
	for(int x: sum[n]){
		if(x <= k) ans += 1;
	}
	
	cout << ans%1000000007;

	return 0;
}

