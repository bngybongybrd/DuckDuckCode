#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int arr[10];
	int ans;
	
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	
	if(arr[0] >= (arr[2] - arr[1])){
		ans = arr[2];
	}else{
		ans = -1;
	}
	
	cout << ans;
	return 0;
}

