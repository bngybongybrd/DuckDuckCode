#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
vector<int> adj[1005];
int arr[1005];


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int link;
	cin >> n;
	
	for(int i = 0; i < n-1; i++){
		for(int x = 0; x < i+1; x++){
			cin >> arr[x];
		}
		if(i%2==1){
			link = (i+1)/2;
		}else{
			link = ((i+1)/2)+1;
		}
		for(int j = 0; j < link; j++){
			adj[i+1].push_back(arr[j]);
			adj[arr[j]].push_back(i+1);
		}
	}
	
	//~ for (int i = 0; i < n; i++) {
        //~ cout << "Adjacency list for node " << i << ": ";
        //~ for (int j : adj[i]) {
            //~ cout << j << " ";
        //~ }
        //~ cout << endl;
    //~ }
	
	for(int i = n-1; i >= 0; i--){
		cout << i << " ";
	}

	return 0;
}
