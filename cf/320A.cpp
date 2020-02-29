#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
int main()
{
    string x;
    cin>>x;
    // vector<int>v(x.begin(),x.end());
    if((*(x.begin()) != '1') || (x.find("444") != x.npos))
    {
        cout<<"NO";
        return 0;
    }


    for(auto it = x.begin()+1;it != x.end(); it++)
    {
        if((*it != '1') && (*it != '4'))
        {
            cout<<"NO"; return 0;
        }
                
        
    }
    cout<<"YES";
}