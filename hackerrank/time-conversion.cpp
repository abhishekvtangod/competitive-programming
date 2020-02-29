// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
#include<iomanip>
#include<sstream>
#include<ios>
using namespace std; 

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define RFOR(i,a,b) for(int i=(a);i>=(b);i--)
#define ITR(z) for(auto it=z.begin(); it!=z.end(); it++)


#define mp make_pair
#define pb push_back
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define setbits(n) __builtin_popcount((n))
#define mset(a,b) (memset(a,b,sizeof(a)))
#define min3(a,b,c) (min((c),min((a),(b))))
#define max3(a,b,c) (max((a),max((b),(c))))
const int INF = 1<<29;

typedef long long int ll;
typedef long l;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef pair<int,pair<int,int> > ppi;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int> > v_pii;
typedef vector<vector<int> > ugraph; //unweighted graph
typedef vector<vector<pair<int,int> > > wgraph; //weighted graph



int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    string s;
    cin>>s;
    
    int hh = (s[0]-'0')*10+(s[1]-'0'); 
    int mm = (s[3]-'0')*10+(s[4]-'0');
    int ss = (s[7]-'0')*10+(s[7]-'0');
    // int flag = 0;
    if(s[8] == 'P' && hh!=12)
    {
        hh += 12;
    }
    if(s[8] == 'A' && hh == 12)
    {
        hh = 00;
    }

    // cout<<hh<<":"<<mm<<":"<<ss<<endl;
    // printf("%02d:%02d:%02d",hh,mm,ss);

    ostringstream& ss("");
    ss<<setw(2)<<setfill('0')<<hh;
    // string s2(ss.str());



    string o = to_string(hh)+":"+to_string(mm)+":"+to_string(ss);
    cout<<o;
    return 0;
}