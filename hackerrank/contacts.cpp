// [abhishekvtangod]
//[https://www.hackerrank.com/challenges/contacts/problem]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;


#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif


// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

struct Trie
{
	bool isEndOfWord;
	unordered_map<char,Trie*> map;
	
};

Trie* newNode()
{
	Trie* node = new Trie;
	node->isEndOfWord = false;
	return node;
}

void addToTrie(Trie*& root,string s)
{
	if(root == nullptr)
		root = newNode();
	
	Trie* temp = root;
	
	for(ll i=0;i < (ll)s.size();i++)
	{
		char x = s[i];
		
		if(temp->map.find(x) == temp->map.end())
			temp->map[x]=newNode();
		
		temp=temp->map[x];
	}
	temp->isEndOfWord=true;
}

ll dfs(Trie* temp)
{
	ll cnt=0;
	if(temp == nullptr)return 0;
	
	if(temp->isEndOfWord==true)cnt++;
	
	for(auto it=temp->map.begin();it!=temp->map.end();it++)
	{
		
		cnt+=dfs(temp->map[it->first]);
	}
	return cnt;
}

ll findInTrie(Trie* root,string s)
{
	ll cnt = 0;
	if(root == nullptr)
		return 0;
	
	Trie* temp = root;
	
	for(ll i=0; i < (ll)s.size();i++)
	{
		
		temp=temp->map[s[i]];
		
		if(temp == nullptr)
			return 0;
	} 
	cnt = dfs(temp);
	
	delete temp;
	delete root;
	return cnt;

}

void solve()
{
	ll n;cin>>n;
	Trie* root = nullptr;	
	
	for(ll i=0; i< n ; i++)
	{
		string oper,s;
		cin>>oper>>s;

		if(oper == "add")
		{
			//cout<<oper<<" "<<s<<endl;
			addToTrie(root,s);
		}
		else if(oper == "find")
		{
			//cout<<oper<<" "<<s<<endl;
			cout<<findInTrie(root,s)<<endl;
		}
	}	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    

	//ll t;cin>>t;
	//while(t--)
	//{
		solve();
	//}
	

    return 0;
}
/*
13  
add abhishektangod
find abh

add abhi
find hi

add hishek

*/
