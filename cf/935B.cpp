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
    vector<char> v;
    ll n;
    char x;
    cin>>n;
    char temp;
    if(n>=1)
    {
        cin>>x;
        v.push_back(x);
        temp = x;
        n--;

    }

    ll cnt=0;
    while (n--)
    {
        cin>>x;
        // cout<<cnt<<" "<<x<<" "<<temp<<endl;

        if((v.empty()) && (temp == x))
        {

            cnt++;
        }
        
        if((!v.empty()) && (*v.rbegin() != x))
        { 
            v.pop_back();
        
        }
        else
        {
            v.push_back(x);
        }
        temp = x;
        // for(auto it=v.begin(); it != v.end(); it++)
        // {
        //     // cout<<"---"<<*it;
        // }
        // cout<<endl;
    }
    cout<<cnt;
    
    

    return 0;
}