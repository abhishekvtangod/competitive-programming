/**
 *    author:  abhishekvtangod
 *    created:        
**/
 
#include<bits/stdc++.h>
using namespace std; 
 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define debug(x) cerr<<#x<<": "<<x<<" "<< endl;
 
typedef long long int ll;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;
 
// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };
pair<int,int> primeFactors(int n)  
{  
	int odd=0,even=0;
    while (n % 2 == 0)  
    {  
        even++;
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
           	if(i%2){
           		odd++;
           	}
           	else{
           		even++;
           	}
 
            n = n/i;  
        }  
    }  
  
    if (n > 2)  {
    	if(n%2){
           		odd++;
           	}
           	else{
           		even++;
           	}
    }
    return {odd,even};
} 
 
 
void solve(){
	ll n;
	cin>>n;
	//ashsih moves first
	string a = "Ashishgup",b = "FastestFinger";
	if(n==1){
		cout<<b<<endl;
		return;
	}
	if(n==2){
		cout<<a<<endl;
		return;
	}
 
	if(n%2){
		cout<<a<<endl;
		return;
	}
	
	

	if(floor(log2(n)) == ceil(log2(n))){
		cout<<b<< endl;
		return;	
	}

	pair<int,int> p;
	p = primeFactors(n);
	int odd = p.first;
	int even = p.second;
	

	if(n%4==0 && odd>0){
		cout<<a<<endl;
		return;
	}

	if(odd>=2){
		cout<<a<<endl;
	}
	else{
		cout<<b<<endl;
	}


 
 
 
}
void solve1()
{
    ll n;cin>>n;
    ll cnt=0;
    if(n==1){cout<<"FastestFinger\n";return;}
    else if(n==2){cout<<"Ashishgup\n";return ;}
    if(n%4==0 && ceil(log2(n))!=floor(log2(n)))
        {cout<<"Ashishgup\n";return ;}
    else if(ceil(log2(n))==floor(log2(n)))
        {cout<<"FastestFinger\n";return;}
    else if(n%2==0)
    {
		pair<int,int> p;
		p = primeFactors(n);
		int odd = p.first;
		int even = p.second;
        ll t=n/2,f=odd;
        
        if(f>=2)cout<<"Ashishgup\n";
        else cout<<"FastestFinger\n";
        return ;
    }
    else  {cout<<"Ashishgup\n";return ;}
} 
int main()
{   
	IOS;
 
 	#ifndef ONLINE_JUDGE
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 
	ll t;cin>>t;
	while(t--){
		solve();
	}
	
 
    return 0;
}