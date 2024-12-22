#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, q;
string arr[300000];
string event;
set<int> S;
int cat;
int f, l;
int arr_c = 0;

int largerThanX(set<int> &s, int x){
	auto it = s.upper_bound(x);
	if(it == s.end()) return 2234567890; /// x is larger than everything
	return *it;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> q;
	for(int i = 0; i < q; i++){
		cin >> event;
		if(event == "TRANSMIT"){
			cin >> f >> l;
			if(largerThanX(S, f-1) > l){
				arr[arr_c] = "YES";
				arr_c++;
			} else {
				arr[arr_c] = "NO";
				arr_c++;
			}
		} else if (event == "SLEEP"){
			cin >> cat;
			S.insert(cat);
		} else {
			cin >> cat;
			S.erase(cat);
		}	
	}
	for(int i = 0; i < arr_c; i++){
		cout << arr[i] << "\n";
	}
	return 0;
}
