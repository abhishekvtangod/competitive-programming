#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    string s;
    cin>>s;
    vector<char> v(s.begin(),s.end()),a;
    for(int i=0; i <v.size();i++)
    {
        if(tolower(v[i]) == 'y' || tolower(v[i]) == 'a' || tolower(v[i]) == 'u' || tolower(v[i]) == 'e' || tolower(v[i]) == 'i' || tolower(v[i]) == 'o')
        {
            v.erase(v.begin()+i);
            i--;

        }
        else
        {
            continue;
        }
        
    }
    for(int i=0;i<v.size();i++)
    {
        a.push_back('.');
        a.push_back(tolower(v[i]));
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }

}