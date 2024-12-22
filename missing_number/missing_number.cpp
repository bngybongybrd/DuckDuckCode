#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int arr[1000005];
	int n;
	cin >> n;
	for(int i = 0; i < n-1; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n-1);
	for(int i = 0; i < n-1; i++){
		if(arr[i]-1 != i){
			cout << i+1;
			return 0;
		}
	}
	cout << n;
	return 0;
}
