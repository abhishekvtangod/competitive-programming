// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {

        ll n;
        char x;
        cin>>n;
        vector<char> v;
        for(ll i =0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }        
        ll ch1=0,ch2=0;
        for(ll i =0; i < n ;i++)
        {
            if(v[i] == '<')ch1++;
            else
            {
                break;
            }
            
        }
        for(ll i =n-1; i >=0 ;i--)
        {
            if(v[i] == '>')ch2++;
            else
            {
                break;
            }
            
        }
        // cout<<ch1<<"->"<<ch2<<endl;
        if(ch1!=n || ch2 != n)
            cout<<min(ch2,ch1)<<endl;
        else
        {
            cout<<"0\n";
        }
        
    }
    

    
    return 0;
}