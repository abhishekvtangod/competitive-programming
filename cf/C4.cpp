#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
main()
{
    int q;
    char x;
    cin>>q;
    string s;
    map<string,int> mp;
    for(int i =0 ; i < q;i++)
    {

        cin>>s;

            if (mp[s] == 0 ) 
                cout<<"OK"<<endl;
            else
                cout<<s<<mp[s]<<endl;

            mp[s]++;

    } 
    cout<<endl;
    for(auto it= mp.begin();it != mp.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }

}