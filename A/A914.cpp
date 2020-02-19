#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long int ll;

main()
{
   ll n,x;
    vector<ll> v,neg;
    cin>>n;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto it=v.end()-1;it >= v.begin();it--)
    {   if(*it < 0)
        {
            neg.push_back(*it);
        }
        else if(sqrt(*it) != (int)(sqrt(*it)))
        {
            cout<<*it;
            goto p;
        }
    }
    // sort(neg.begin(),neg.end());
    
    cout<<*neg.begin();
    
    
    p: cout<<"";
}