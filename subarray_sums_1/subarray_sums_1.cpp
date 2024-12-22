#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, x;
int arr[200005];
int ans = 0;
int sum = 0;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> x;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int l = 0;
	int r = 0;
	
	while(l < n){
		if(sum == x){
			ans += 1;
		}
		if(sum < x){
			sum += arr[r];
			r += 1;
		}else{
			sum -= arr[l];
			l += 1;
		}
	}
	
	cout << ans;
	
	return 0;
}
