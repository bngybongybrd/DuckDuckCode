#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, a;
	int max = 0;
	int arr[100005];
	cin >> n;
	for(int i = 0; i < n; i++){ //adding oranges into array
		cin >> a;  // can use 'cin >> arr[i]'
		arr[i] = a;
	}
	
	int min;
	int total;
	for(int i = 0; i < n; i++){
		min = arr[i];
		total = arr[i];
		if(total > max){ // can use max()
			max = total;
		}
		if(i == 5){
			if(arr[i] > max){ // can use max()
				max = arr[i];
				break;
			}
		}
		for(int j = 0; j < n-i-1; j++){
			if(arr[i+j+1] < min){
				min = arr[i+j+1];
				total = min*(j+2);
				
			}
			else{
				total = min*(j+2);
			}
			if(total > max){ // can use max()
				max = total;
			}
		}
	}
	cout << max;
	return 0;
}
