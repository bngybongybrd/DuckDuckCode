#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[500000];
int n, k, b;
int c = 0;
int card_no = 0;
priority_queue<int> pq;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < k; i++){
		pq.push(arr[i]);
		card_no++;
	}
	b = pq.top() + 1;
	for(int i = 0; i <= n; i++){
		if((pq.size() == 0) or (b == 1)){
			cout << c;
			return 0;
		}
		if(pq.top() < b){
			if(card_no < n){
				b = pq.top();
				pq.pop();
				pq.push(arr[card_no]);
				card_no++;
				c++;
			} else {
				b = pq.top();
				pq.pop();
				c++;
			}
		} else {
			pq.pop();
		}
	}
	return 0;
}
