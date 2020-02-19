#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
main()
{
    int q;
    char x;
    cin>>q;
    string s[q];
    for(int i =0; i < q; i++)
    {
        cin>>s[i];
        s[i].push_back('0');
    }
    if(q)
    {
        cout<<"OK\n";
    }
    for(int i=1;i < q; i++)
    {
        for(int j=0; j < i;j++)
        {
            if(s[i] == s[j])
            {
                int x = (*(s[i].end()-1)+1);
                s[i].pop_back();
                s[i].push_back(x);
        // cout<<endl<<"in j"<<j<<endl;
        // cout<<endl<<"in i"<<i<<endl;
        // cout<<s[i]<<endl;
            }
        }
    }
    
    for(int i =1; i < q; i++)
    {
        if(*(s[i].end()-1)=='0')        
        {
            cout<<"OK";
        }
        else
        {
            cout<<s[i];
            
        }

        cout<<endl;
        
    }


    map<string, int> m;

    for (int i = 1; i<=  n;i++)

    {

    read(s);

    if (mp[s] = =0) write("OK"); else write(s, mp[s]);

    mp[s]++;

    } 

}