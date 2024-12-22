#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int arr[1000005];
int preSum[1000005];
int maxPre[1000005];

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	preSum[0] = 0;
	for(int i = 1; i <= n; i++){
		preSum[i] = preSum[i-1] + arr[i];
	}
	
	maxPre[0] = 0;
	for(int i = 1; i <= n; i++){
		maxPre[i] = max(maxPre[i-1], preSum[i]);
	}
	
	int ans = 10000000000000000LL;
	
	for(int i = 1; i <= n; i++){
		ans = min(ans, preSum[i] - maxPre[i-1]);
	}
	
	cout << ans;
	
	return 0;
}
