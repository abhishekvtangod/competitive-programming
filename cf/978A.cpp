#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
main()
{   int q,x;
    cin>>q;
    set<int> s;
    vector<int> v,m;
    while (q--)
    {
        cin>>x;
        v.push_back(x);
        s.insert(x);
    }
    // set<int>::iterator sit;
    for(auto it = v.end()-1; it >= v.begin() && !(s.empty()); it--)
    {
        // if(s.count(*it) != s.npos)
        if(s.count(*it))
        {

            m.push_back(*it);
            s.erase(*it);
        }
    }
    cout<<m.size()<<endl;
    
    for(auto it = m.end()-1; it >= m.begin(); it--)
    {
        cout<<*it<<" ";
    }
 
}