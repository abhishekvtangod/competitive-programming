#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
        ll n;cin>>n;
        ll a[n],b[n],diff,z=0;
        vector<ll> pos,neg;
        ll i=0,t;
        while (i<n)
        {
            cin>>a[i++];
        }i=0;
        while (i<n)
        {
            cin>>b[i];
            diff=a[i]-b[i];
            if(diff>0)pos.push_back(diff);
            else if(diff==0)z++;
            else neg.push_back(diff);
            i++;
        }
        sort(pos.begin(),pos.end(),greater<ll> ());
        sort(neg.begin(),neg.end());
        ll ans=0;
        ans+=pos.size()*z;
        ll j=neg.size();
        auto it1=pos.begin(),it2=neg.begin();
        while (it1!=pos.end() && it2!=neg.end())
        {
            if(*it1>abs(*it2)){ans+=j;it1++;}
            else {it2++;j--;}
        }
        ans+=(pos.size()*(pos.size()-1))/2;
        cout<<ans<<"\n";
}