#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>   
typedef long long int ll;

using namespace std;
main()
{
    ll n,k;
    cin>>n>>k;
    
    if(((ll)n/k)%2 != 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

}