#include <bits/stdc++.h> //include all relevant libraries
using namespace std;
#define int long long //makes all integers have large capacity by default

//declare variables here
int days;
int sum;
int a;

signed main(){ //main function: code begins running in here
	ios_base::sync_with_stdio(false); //makes input faster
	cin.tie(0); //makes input faster
	
	cin >> days;
	for(int i = 0; i < days; i++){
		cin >> a;
		sum += a;
	}
	cout << sum;
	
	return 0; //terminate program
}
