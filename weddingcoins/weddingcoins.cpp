#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, q;
int ans = 0;



signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	
	if(n >= 1000000){
		q = n / 1000000;
		n = n % 1000000;
		ans += q;
	}
	
	while(n > 0){
		if(n >= 1000000){
			n -= 1000000;
			ans += 1;
		}
		else if(n >= 500000){
			n -= 500000;
			ans += 1;
		}
		else if(n >= 100000){
			n -= 100000;
			ans += 1;
		}
		else if(n >= 50000){
			n -= 50000;
			ans += 1;
		}
		else if(n >= 10000){
			n -= 10000;
			ans += 1;
		}
		else if(n >= 5000){
			n -= 5000;
			ans += 1;
		}
		else if(n >= 1000){
			n -= 1000;
			ans += 1;
		}
		else if(n >= 500){
			n -= 500;
			ans += 1;
		}
		else if(n >= 100){
			n -= 100;
			ans += 1;
		}
		else if(n >= 50){
			n -= 50;
			ans += 1;
		}
		else if(n >= 10){
			n -= 10;
			ans += 1;
		}
		else if(n >= 5){
			n -= 5;
			ans += 1;
		}
		else if(n >= 1){
			n -= 1;
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}
