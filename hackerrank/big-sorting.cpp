// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;
// bool check(string a, string b){
//     return a.length() == b.length() ? a < b : a.length() < b.length();
// }
int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    vector<string> v;
    while(t--)
    {
        string s;cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(), [](string a,string b){return a.length() == b.length()?a<b:a.length() < b.length(); });
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}