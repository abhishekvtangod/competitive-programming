// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    //memoization array
        string s;
        cin>>s;
    
    while(s != "0")
    {
        ll dp[5020]={0};

        // cout<<s<<endl;
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= s.size(); i++)
        {
            if(s[i-1] != '0')
                dp[i] += dp[i-1];
            ll x = ((s[i-1-1]-'0')*10)+(s[i-1]-'0');
            // cout<<x<<endl;
            if(((x) >=10) && ((x) <= 26))
                dp[i] += dp[i-2];
                
        }
        // for(int i =0; i <= s.size();i++)
        cout<<dp[s.size()]<<endl;
        s="";
        cin>>s;
    }
    return 0;
}