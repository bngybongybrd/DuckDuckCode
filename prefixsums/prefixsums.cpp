#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, q;
int arr[1000005];
int pre[1000005];

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> q;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	pre[0] = arr[0];
	for(int i = 1; i < n; i++){
		pre[i] = pre[i-1] + arr[i];
	}
	
	int l, r;
	for(int i = 0; i < q; i++){
		cin >> l >> r;
		cout << pre[r-1] - pre[l-2] << "\n";
	}

	return 0;
}
