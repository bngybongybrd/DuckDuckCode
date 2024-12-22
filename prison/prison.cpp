#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m, smallest = 0, biggest = 100005;
int l, r;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		cin >> l >> r;
		smallest = max(l, smallest);
		biggest = min(r, biggest);
	}
	if(smallest <= biggest){
		cout << (biggest-smallest+1);
	} else {
		cout << 0;
	}
	
	return 0;
}

