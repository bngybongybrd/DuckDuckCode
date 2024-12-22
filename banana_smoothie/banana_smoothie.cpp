#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, k;
	int ans = 0;
	int arr[100005];
	cin >> n >> k;
	int index = k-1;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	reverse(arr, arr+n);
	
	for(int i = 0; i < n/k; i++){
		if(arr[index] < 0){
			break;
		} else {
			ans += arr[index];
			index += k;
		}
	}
	cout << ans << "\n";
	return 0;
}
