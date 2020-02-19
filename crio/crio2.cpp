#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<string>
typedef long long int ll;

using namespace std;



int main()
{
    ll n,k;
    string a,b;

    cin>>n>>a>>b>>k;
    vector<string> v;
    v.push_back(a);
    v.push_back(b);
    string x;
    for(int i = 2; i < n; i++)
    {   x = v[i-2]+v[i-1]+v[i-1];     
        v.push_back(x);1947
    }
    x = *(v.end()-1);
    
    if(x.size() <= k)
    {
        cout<<"-1";

    }
    else
    {
    cout<<x[k-1];

    }
    

    // }



    return 0;
}