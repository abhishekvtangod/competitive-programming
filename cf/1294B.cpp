// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        pair<ll,ll> p;
        ll n;cin>>n;
        vector<pair<ll,ll>> v;
        while (n--)
        {
            cin>>p.first>>p.second;
            v.push_back(p);
        }

        sort(v.begin(),v.end());

        ll m = v.begin()->second;
        n = v.begin()->first;
        int flag=0;
        
        string ans;
        if(m < 0 || n < 0)
        {
            flag=1;
            cout<<"NO";
            goto abhi;
        }
        // while (n--)
        // {
        //     ans +="R";
        // }
        // while (m--)
        // {
        //     ans +="U";
        // }
        ans += string(n, 'R');
    	ans += string(m, 'U');
            
        

        for(auto it = v.begin(); it < v.end()-1; it++)
        {   auto i = it+1;
            m = i->second - it->second;
            n = i->first - it->first;
            if(m < 0 || n < 0)
            {
                flag=1;
                cout<<"NO";
                break;
            }
            // while (n--)
            // {
            //     ans +="R";
            // }
            // while (m--)
            // {
            //     ans +="U";
            // }   
            ans += string(n, 'R');
    		ans += string(m, 'U');
            // cout<<m<<" "<<n<<endl;
        }   
        if(flag == 0)
        {
            cout<<"YES\n"<<ans;
        }
        
        abhi: cout<<"\n";


    }
    

    return 0;
}