#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, a;
    int max = 0;
    int second = 0;
    int index;
    vector<int> V;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        V.push_back(a);
    }
    
    for(int i = 0; i < V.size(); i++){
        if(V[i] > max){
            max = V[i];
        }
    }
    
    
    for(int i = 0; i < V.size(); i++){
        if(V[i] > second and V[i] != max){
            second = V[i];
        }
    }
    
    for(int i = 0; i < V.size(); i++){
        if(V[i] == second){
            index = i+1;
        }
    }
    cout << index;
    return 0;
}
