// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
ll *tree;
ll *A;

void build(ll node, ll start,ll end)
{
    if(start == end)
    {
        tree[node] = A[start];
    }
    else
    {
        ll mid=start+((end-start)/2);
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        tree[node] = tree[2*node]+tree[2*node+1];

    }
    
}
void update(ll node,ll start,ll end, ll index,ll val)
{
    
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,x,q;
    cin>>n>>q;
    tree =  new ll[2*n];   
    A = new ll[n];
    memset(A,0,n);
    build(1,0,n-1);

    for(ll i =0; i < q;i++)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        if(x)
        {

        }
        else
        {
            update()
        }
        
    }



    for(ll i =0; i <2*n;i++)
        cout<<tree[i]<<" ";


    return 0;
}