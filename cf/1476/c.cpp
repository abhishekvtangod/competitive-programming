#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

ll n;


void solve(){
	vector<ll> c, a, b;
	cin >> n;
	for(int i= 0; i < n; i++){
		ll temp;
		cin >> temp;
		c.push_back(temp);
	}
	for(int i= 0; i < n; i++){
		ll temp;
		cin >> temp;
		a.push_back(temp);
	}
	for(int i= 0; i < n; i++){
		ll temp;
		cin >> temp;
		b.push_back(temp);
	}
	ll len =abs(1-c[n-1]);
	ll ans = 0;
	for(int i = n -1; i > 0; i--){
		ll temp = abs(a[i] - b[i]);
		if(a[i] == b[i]){
			ans = max({ans, len + 2});
			len = abs(1-c[i-1]);
		} else{
			ans = max({ans, len+2+temp});
			len = len + 2 + abs(1 - c[i-1])-temp;
		}
		len = max({len, abs(1-c[i-1])});
	}
	cout << ans << endl;	
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