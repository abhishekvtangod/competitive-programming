#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,n,c,pre;
    vector <ll> v;
    cin>>n>>c;
    if(n){cin>>pre;n--;}
    while(n--)
    {
        cin>>t;
        v.push_back(pre-t);pre=t;
    }
    ll max=-1;
    for(auto p=v.begin();p!=v.end();p++)
    {
        if(max<*p)max=*p;
    }
    cout<<((max-c>0)?max-c:0)<<"\n";
}