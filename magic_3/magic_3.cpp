#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, s, d;
	cin >> n >> s >> d;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(x < s and y > d){
			cout << "Yes";
			return 0;
		}	
	}
	cout << "No";
	
}
