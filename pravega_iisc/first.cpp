// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
// #include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    // int n;
    int128_t n;cin>>n;
    // string m = 
    // if(s.size() >= 4)
    // {
    //     n = (s[s.size()-1]-'0') + (s[s.size()-2]-'0')*10+ (s[s.size()-3]-'0')*100+ (s[s.size()-4]-'0')*1000;
    // cout<<n<<endl;

    // }
    // else
    // {
    //     n = stoi(s);
    // }
        
    // switch(n & 3) 
    // { 
    // case 0: cout<<n;
    //         break;
    // case 1: cout<< 1;break;       
    // case 2: cout<< n + 1;  break;   
    // case 3: cout<< 0;        break;
    // }
    if(n&3 == 0)
        cout<<n;
    else if(n&3 == 1)
        cout<<1;
    else if(n&3 == 2)
        cout<<n+1;    
    else if(n&3 == 3)
        cout<<0;    
    return 0;
}