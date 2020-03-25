// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
ll ans=0;
void merge(ll arr[],ll l, ll m, ll r)
{
    ll n1=m-l+1,n2=r-m;
    ll L[n1],R[n2];
    for(ll i = 0; i  < n1; i++)
        L[i] = arr[l+i];
    for(ll i = 0; i  < n2; i++)
        R[i] = arr[m+1+i];

    ll i = 0;
    ll j = 0;
    ll k = l;
    while (i < n1 && j < n2)
    {
        if(L[i] < R[j])
        {
            
            ans+=L[i]*(n2-j);   
            /*

            adding (n2-j) times left element (L[i]) of non-inversion,
            since all elements from j to n2(last index of array) 
            are greater than L[i] 
            
            */

            arr[k] = L[i];
            i++;
        }
        else
        {
            
            arr[k] = R[j];
            j++;
        }
        k++;

    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }    
    


}

void mergeSort(ll arr[],ll l,ll r)
{
    if(l < r)
    {
        ll m = (l+(r-1))/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    // freopen ("output5.txt", "w", stdout); 

    ll test;cin>>test;
    while (test--)
    {
        ans = 0;
        ll n;
        cin>>n;
        ll arr[n];
        ll x=n-1;
        for(ll i =0; i < n; i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,n-1);

        cout<<ans%mod<<endl;

            
    }

    // fclose(stdout); 
    
    return 0;
}