#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int ans = 0;
	int arr[200005];
	cin >> n;
	bool check[n+1] = {false};
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(not check[arr[i]-1]){
			ans += 1;
		}
		check[arr[i]] = 1;
	}
	cout << ans << "\n";
	return 0;
}

