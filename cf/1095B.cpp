#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
main()
{
    ll n,x;
    cin>>n;
    vector<ll> v;
    while (n--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    n = v.size();
    cout << min(v[n - 2] - v[0], v[n - 1] - v[1]) << endl;
    // vector<ll>:: iterator i1,i2;
    // i1 = v.begin(); i2 = v.end()-1;
    // ll min = *i2;
    // ll diff = abs(*i2 - *i1);
    // while (min > diff)
    // {
    //     // cout<<"min : "<<min<<"; diff : "<<diff<<endl;
    //     min = diff;
    //     i2--;
    //     diff = abs(*i2 - *i1);
    //     // cout<<"min : "<<min<<"; diff : "<<diff<<endl;
        
    // }   
    // cout<<min;
    // cout<<abs(*(i2-1)-*i1);
    // cout<<*i1<<" : "<<*i2<<": "<<*(i2-1);
}