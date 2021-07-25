#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

const int mxN = 2*1e5+11;
int n;
int ht[mxN];

void solve(){
	memset(ht, 0, sizeof(ht));
	cin >> n;
	vector<int> v;
	for(int i= 0; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	if(n <= 2){
		cout << n-1 << endl;
		return;
	}
	v.push_back(-1);
	vector<int> ans;
	for(int i = 1; i < v.size()-1; i++){
		int temp=1;
		while(i < v.size()-1 && v[i+1] > v[i]){
			temp++;
			i++;
		}
		ans.push_back(temp);
	}
	ht[0] = 1;
	int k = 0;
	// cout << "--" << endl;
	// for(auto u: ans){
	// 	cout << u << " ";
	// }
	// cout << endl;
	// cout << "--" << endl;

	for(int i= 0; i < ans.size(); i++){
		for(int j=0; j < ht[i] && k < ans.size(); j++){
			ht[i+1] += ans[k++];
		}
	}
	int cnt = 0;
	for(int i= 0; i <=k+2;i++){
		// cout << ht[i] << " ";
		if(ht[i]<= 0){
			cnt = i-1;
			break;
		}
	}
	cout << cnt << endl;
}


int main()
{   
	IOS;

	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}

    return 0;
}