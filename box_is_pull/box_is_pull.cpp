#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int tests;
	int arr[100005];
	int ans[100005];
	cin >> tests;
	for(int i = 0; i < tests; i++){
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		int xd = (max(arr[0], arr[2]) - min(arr[0], arr[2]));
		int yd = (max(arr[1], arr[3]) - min(arr[1], arr[3]));
		if(xd and yd){
			ans[i] = xd + yd + 2;
		}else{
			ans[i] = xd + yd;
		}
	}
	for(int i = 0; i < tests; i++){
		cout << ans[i] << endl;
	}
	
	return 0;
}
