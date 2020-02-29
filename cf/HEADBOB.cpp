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

    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        vector<int> v;
        while (x--)
        {
            char k; cin>>k;
            v.push_back(k);
        }
        int flag = 0;
        for(auto it = v.begin(); it != v.end(); it++)
        {
            if(*it == 'I')
            {
                flag = 1;
                cout<<"INDIAN"<<endl;
                break;
            }
            else if(*it == 'Y')
            {
                flag = 1;
                cout<<"NOT INDIAN"<<endl;
                break;
            }
        }
        if(!flag)
        {
            cout<<"NOT SURE"<<endl;
        }
        
    }
    


    return 0;
}



