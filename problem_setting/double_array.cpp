// C++ program to demonstrate generate function in STL 
#include <bits/stdc++.h>	 
using namespace std;

// #define endl "\n"
// typedef long long int ll;

// ll mx_val = 100000000-11;
// int n = 100000-4;

// int randomize() 
// { 
// 	return 1+(rand() % mx_val); 
// } 

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n ; i++){
		cin >> v[i];
	}
	int mx = -1;
	for(int i = 0; i< n;i++){
		mx = max(mx, v[i]);
	}
	int s_mx = -1;
	for(int i = 0; i< n;i++){
		if(v[i] < mx && v[i] > s_mx){
			s_mx = v[i];
		}
	}
	
	cout << mx + s_mx << endl;	


}

int main () 
{ 
// for different values each time we run the code 
	// srand(time(NULL)); 
	solve();		
	// vector<ll> a(n); 
	// vector<ll> b(n);

	// generate(a.begin(), a.end(), randomize); 
	// generate(b.begin(), b.end(), randomize); 

	// cout << n << endl;
	// for(ll u: a){
	// 	cout << u << " ";
	// }
	// cout << endl;
	// for(ll u: b){
	// 	cout << u << " ";
	// }

	return 0; 
} 
