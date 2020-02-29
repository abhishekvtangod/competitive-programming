#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<algorithm>

using namespace std;
typedef long long ll;


void showq(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
}

int main()
{
    ll n,x,k;
    cin>>n>>k;
    vector<int> v;
    queue <int> q;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
        // q.push(x);
        // s.insert(x);
    }
    for(auto it=v.begin();it != v.end();it++)
    {
        for(auto its = s.begin();its != s.end(); its++)
        {
            if(*it == *its)
            {
                q.find()
            }
        }
        if(q.size() == k)
        {

        }
    }


    showq(q);
    for(auto it=s.begin();it != s.end();it++)
    {
        cout<<*it<<" ";
    }
    
}
 