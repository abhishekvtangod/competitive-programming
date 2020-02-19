#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<unordered_set>

typedef long long int ll;

using namespace std;

string ltdt(string dt, string lt)
{   int x1,y1,z1,x2,y2,z2;
        
    
    
    return s;

}


int main()
{
    int q,x;
    cin>>q;
    while (q--)
    {
        cin>>x;
        map<pair<pair<string,string>,pair<string,string>>,int> mp;
        
        for(int i =0;i< x;i++)
        {   string name,no,at,dt,lt;
            cin>>name>>no>>at>>dt>>lt;
            dt = ltdt(dt,lt);
            pair<string,string> p[3];
            pair<pair<string,string>,pair<string,string>> k[1];
            p[0].first =  at ;
            p[0].second = dt;
            p[1].first = name;
            p[1].second = no;
            k[0].first = p[1];
            k[0].second = p[0];
            mp[k[0]] = 0;
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            cout<<it->first.first.first<<":"<<it->first.first.second<<":"<<it->first.second.first<<":"<<it->first.second.second <<" : "<<it->second<<endl;
        }
        
        
    }
    


    return 0;
}