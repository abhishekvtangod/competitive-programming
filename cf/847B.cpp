#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t;
    cin>>n;
    queue<ll> v;
    while(n--)
    {
        cin>>t;v.push(t);
    }
    n=v.size();
    auto end=v.back();
    ll count=0,pre=0;
    for(;count!=n;)
    {
        ll a=v.front();
        if(pre<a)
        {
            cout<<a<<" ";
            count++;pre=a;
        }
        else 
        {
            v.push(a);
        }
        if(end==a)
        {
            end=v.back();cout<<"\n";pre=0;
        }
        v.pop();
    }

}