#include <bits/stdc++.h>
#define int long long
using namespace std;

int q;
int a, b, c, d;
int low;
int high;
int arr[500005];


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> q;
	
	for(int i = 0; i < q; i++){
		cin >> a >> b >> c >> d;
		low = 0;
		high = d;
		if(d == 0){
			arr[i] = 1;
			continue;
		}
		while(low < high-1){
			int mid = (low+high) / 2;
			if((a*pow(mid, 3) + b*pow(mid, 2) + c*mid) > d){
				high = mid;
			} else {
				low = mid;
			}
		}
		arr[i] = high;
	}
	
	for(int i = 0; i < q; i++){
		cout << arr[i] << "\n";
	}
	
	return 0;
}

