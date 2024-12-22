#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int arr[300005];
int low = 0;
int high = 10000000000;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		cin >> arr[i];
	}
	
	while(low < high-1){
		int mid = (low+high) / 2;
		
		int childrenNeeded = 0;
		
		for(int i = 0; i < m; i++){
			childrenNeeded += arr[i] / mid;
			
			if((arr[i] % mid) != 0){
				childrenNeeded += 1;
			}
		}
		
		if(childrenNeeded <= n){
			high = mid;
		} else {
			low = mid;
		}
		
	}
	
	cout << high;
	
	return 0;
}
