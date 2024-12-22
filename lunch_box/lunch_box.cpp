#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	int ans = 0;
	int arr[100005];
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> arr[i];
	}
	sort(arr, arr+m);
	for(int i = 0; i<m; i++){
		if(n - arr[i] >= 0){
			ans += 1;
			n -= arr[i];
		}else{
			break;
		}
	}
	cout << ans << "\n";
	return 0;
}
