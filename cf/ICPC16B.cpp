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

    int q;cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        int a=0,b=0,c=0,d=0,f=0;
        while (n--)
        {
            int x;
            cin>>x;
            if(x==0)
                a++;
            else if(x==1)
                b++;
            else if(x==-1)
                c++;
            else
            {
                d++;
            }
                
        }
        if(d>1)
            f=1;
        if(c>=1 && d>=1)
            f=1;
        if(c>1 && b==0)
            f=1;

        if(!f)
            cout<<"yes\n";
        else
            cout<<"no\n";    





        // vector<int> v;
        // while (n--)
        // {
        //     int x;cin>>x;
        //     v.push_back(x);
        // }
        // for(auto it = v.begin(); it != v.end()-1 ; it++)
        // {
        //     for(auto i = it+1; i != v.end(); i++)
        //     {
        //         auto j= find(v.begin(), v.end(), (*it)*(*i));
        //         if(j == v.end())
        //         {
        //             flag = 1;
        //             break;
        //         }
        //         // cout<<*i<<" "<<*it<<" "<<(*it)*(*i)<<endl;
        //     }

        //         if(flag == 1)
        //             break;
        // }        
        // if(flag)
        //     cout<<"no\n";
        // else
        // {
        //     cout<<"yes\n";
        // }
        
    }
    

    return 0;
}