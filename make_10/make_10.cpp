#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t;
	int arr[100005];
	int total = 0;
	int x, y, z;
	cin >> t;
	for(int i = 0; i < t; i++){
		total = 0;
		cin >> arr[0] >> arr[1] >> arr[2];
		
		/// removes 3 + 3 + 4
		y = arr[1]/2;
		arr[1] = arr[1]-(y*2);
		if(arr[2] <= y){
			total += arr[2];
			y = y - arr[2];
			arr[2] = 0;
		}
		else{
			total += y;
			arr[2] = arr[2] - y;
			y = 0;
		}
		
		/// removes 3 + 3 + 2 + 2
		x = arr[0]/2;
		if(x <= y){
			total += x;
			arr[0] = arr[0] - (x*2);
			y = y - x;
		}
		else{
			total += y;
			arr[0] = arr[0] - (y*2);
			y = 0;
		}
		
		/// removes 4 + 4 + 2
		z = arr[2]/2;
		arr[2] = arr[2] - (z*2);
		if(arr[0] <= z){
			total += arr[0];
			z = z - arr[0];
			arr[0] = 0;
		}
		else{
			total += z;
			arr[0] = arr[0] - z;
			z = 0;
		}
		
		/// sum the rest of '2's and '4's
		total += (arr[0]*2 + arr[2]*4) / 10;
		cout << total << '\n';
	}
	
	return 0;
}
