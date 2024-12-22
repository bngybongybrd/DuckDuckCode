#include <bits/stdc++.h>
#define int long long
using namespace std;

int t, mod;

int qexp(int a, int b){
	if(b == 1) return a;
	if(b%2==0){
		int res = qexp(a, b/2);
		res = res*res;
		res %= mod;
		return res;
	} else {
		int res = qexp(a, b-1) * a;
		res %= mod;
		return res;
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> t;
	
	int a, b;
	
	for(int i = 0; i < t; i++){
		cin >> a >> b >> mod;
		cout << qexp(a, b) << "\n";
	}

	return 0;
}
