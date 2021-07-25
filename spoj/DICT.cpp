/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

string to_string(const string &s){
	return "{" + s + "}";
}

string to_string(const char &c){
	string s = "";
	s += c;
	return s;
}

template <typename A, typename B>
string to_string(const pair<A, B> &p){
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(const tuple<A, B, C> &t){
	return "(" + to_string(get<0>(t)) + ", " + to_string(get<1>(t)) + ", " + to_string(get<2>(t)) + ")";
}

template <typename A>
string to_string(A v){
	string res = "{";
	bool f = 0;
	for(const auto &u: v){
		if(f){
			res += ", ";
		}
		f = 1;
		res += to_string(u);
	}
	res += "}";
	return res;
}

void cus_debug() { cerr << "]" << endl; }

template <typename Head, typename... Tail>
void cus_debug(Head H, Tail... T) {
  cerr << to_string(H) << ", ";
  cus_debug(T...);
}

#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", cus_debug(x)
#else
#define debug(...) 42
#endif

//tr[k] represents list of links for the k-th node
//tr[k][m], node which represents son of k-th node using m-th character


// set<string> ans;
int flag = 1;
struct trie{
	
	struct node{
		int end = 0;
		int child[26];
	};
	node tr[25003];
	// int tr[1000006][28];


	int root = 0;

	void init()
	{
		// memset(tr,-1,sizeof(tr));
		for(int i = 0; i < 25003; i++){
			for(int j = 0; j < 26; j++){
				tr[i].child[j] = -1;
			}
		}
	}
	int nxt = 1;

	void insert(string s)
	{
		int currNode = root;
		
		for(int i=0; i<s.size();i++)
		{
			int q = s[i]-'a';
			
			if(tr[currNode].child[q] == -1)
			{
				tr[currNode].child[q] = nxt++;
			}
			
			currNode = tr[currNode].child[q];
		}
		tr[currNode].end++;
	}
	void dfs(int currNode, string s){
		if(currNode == -1){
			return;
		}
		if(tr[currNode].end){
			// ans.insert(s);
			cout << s << endl;
			flag = 1;
		}
		for(int i = 0; i<26; i++){
			dfs(tr[currNode].child[i], s+(char)(i+'a'));
		}
	}
	void find(string s){
		int currNode = root;
		for(int i = 0; i < s.size(); i++){
			int q = s[i] - 'a';
			if(tr[currNode].child[q] == -1){
				// cout << "No match." << endl;
				return;
			}
			currNode = tr[currNode].child[q];
		}
		for(int i= 0; i< 26; i++){
			dfs(tr[currNode].child[i], s+(char)(i+'a'));
		}
		// if(ans.size() == 0){
		// 	cout << "No match." << endl;
		// }
	}

};
trie tr;

// start of CP 2.0
void solve(){
	int n;
	cin >> n;
	// scanf("%d", &n);
	tr.init();
	for(int i = 0; i <n; i++){
		// string s;
		char s[26];
		cin >> s;
		// scanf("%s", s);
		tr.insert(s);
	}
	int k;
	cin >> k;
	// scanf("%d", k);
	for(int i = 0; i < k; i++){
		string s;
		cin >> s;
		// ans.clear();
		flag = 0;
		cout << "Case #" <<  (i+1) << ":" << endl;
		tr.find(s);
		
		if(!flag){
			cout << "No match." << endl;
		}
		// for(auto u: ans){
		// 	cout << u << endl;
		// }
	}


}

int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}



