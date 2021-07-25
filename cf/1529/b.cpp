#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

const int mxN = 1e5 + 6;
ll n;
vector<ll> ans;


void solve(){
	cin >> n;
	ans.clear();
	ll mn = 1LL<<62-1, mnP = 1LL<<62;
	for(int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		if(temp <= 0){
			ans.push_back(temp);
		} else{
			mnP = min({mnP, temp});
		}
	}
	sort(ans.begin(), ans.end());
	for(int i= 1; i <ans.size();i++){
		mn = min({mn, abs(ans[i-1]-ans[i])});
	}
	if(mn >= mnP){
		ans.push_back(mnP);
	}
	cout << ans.size() << endl;
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