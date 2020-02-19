// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
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


    int t;
    cin>>t;
    int count=0;
    
    while (t--)
    {
        int n,s,k;
        cin>>n>>s>>k;
        vi v;
        while (k--)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        int k1=s,k2=s;
        count=0;
        for(int i =0; i <v.size(); i++)
        {   
            auto it1 = find(v.begin(),v.end(),k1);
            auto it2 = find(v.begin(),v.end(),k2);
            // k1--;k2++;
            if(it1 == v.end() && k1 > 0)
            {
        // cout<<"k1: "<<k1<<" k2: "<<k2<<" i:"<<i<<" c:"<<count<<endl;

                break;
            }
            if(it2 == v.end() && k2 <= n)
            {
        // cout<<"k1: "<<k1<<" k2: "<<k2<<" i:"<<i<<" c:"<<count<<endl;

                break;
            }
            count++;
        // cout<<"k1: "<<k1<<" "<<(*it1)<<" k2: "<<k2<<" "<<(*it2)<<" i:"<<i<<" c:"<<count<<endl;
        k1--;k2++;
        // -v.begin()
        }
        

        cout<<count<<endl;
    }
    


    return 0;
}