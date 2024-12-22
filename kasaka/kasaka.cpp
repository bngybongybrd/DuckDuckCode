#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string str;
	string rev;
	int i = 0;
	int backa = 0;
	int fronta = 0;
	cin >> str;
	rev = str;
	reverse(rev.begin(), rev.end());
	bool flag = true;
	while(flag){
		if(rev[i] == 'a'){
			backa += 1;
		}else{
			flag = false;
		}
		i++;
	}
	flag = true;
	i = 0;
	while(flag){
		if(str[i] == 'a'){
			fronta += 1;
		}else{
			flag = false;
		}
		i++;
	}
	// cout << fronta << '\n' << backa << '\n';
	string palin = str.substr(fronta, str.size() - backa - fronta);
	// cout << palin;
	string rev_palin;
	rev_palin = palin;
	reverse(rev_palin.begin(), rev_palin.end());
	if(palin == rev_palin and fronta <= backa){
		cout << "Yes";
	}else{
		cout << "No";
	}
	return 0;
}
