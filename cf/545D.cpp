#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,n;
    cin>>n;
    vector <ll> v;
    while(n--)
    {cin>>t;v.push_back(t);}
    sort(v.begin(),v.end());
    ll sum=0,count=0;
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(sum<=*it)
        {
            sum+=*it;count++;
        }
    }
    cout<<count<<"\n";
}