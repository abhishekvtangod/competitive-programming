#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
#define mod 1000000007

typedef long long int ll;

using namespace std;
ll i =0,x=0;

ll T(ll n,ll k,ll sum)
{
    if (n == x)
    {
        sum += 1;
    }
    else if(n <= k)
    {    
        sum += 1+T(n-1,k,sum);

    }
    else
    {
        sum += T(n-1,k,sum);
    }
    // cout<<"sum : "<<sum<<" i :"<<i++<<endl;
    return sum;   
}

main()
{
    ll n,k,t_sum=0;
    cin>>n>>k;
    
    if(n <= k)
    {
        t_sum = 1;
    }
    else
    {
            while (n > k)
            {   x = n-k;
                t_sum += T(n-1,k,0);
                n--;
            }
    }
    
    cout<<t_sum%mod;
    

}