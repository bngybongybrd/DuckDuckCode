#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int arr[100005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	if(arr[n/2] > arr[n/2-1]){
		cout << arr[n/2] - arr[n/2-1] << "\n";
	} else {
		cout << 0 << "\n";
	}
	return 0;
}
