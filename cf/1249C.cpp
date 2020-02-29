#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;
ll b,c,a;
int di(ll n,ll p)
{
    for(ll i=p+1;i<=sqrt(n);i++)
        if(n%i==0 )
        {b=i;c=(n/i);return 1;}        
    return 0;
}
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n,f=0;
        cin>>n;ll i;
        for(i=2;i<sqrt(n);i++)
            if(n%i==0){
                {a=i;break;}
            }
        if(di((ll)n/i,i) && c!=a && c!=b){cout<<"YES\n"<<a<<" "<<b<<' '<<c<<"\n";}
        else cout<<"NO\n";
    }
}