#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int t;
    string s1,s2;
    int front,rear,flag;
    cin>>t;
    while(t--)
    {   flag = 0;
        cin>>s1;
        cin>>s2;
        vector<char> p(s1.begin(),s1.end()), h(s2.begin(),s2.end());
        sort(p.begin(),p.end());

        for(int i = 0 ; i < h.size(); i++)
        {
            vector<char> hash(s2.begin()+i,s2.begin()+i+p.size());
            sort(hash.begin(),hash.end());
            if(p == hash)
            {
                cout<<"YES"<<endl;
                flag =1;
                break;
            }
            // for(auto it= hash.begin();it != hash.end();it++)
            // {
            //     cout<<*it;
            // }
            // cout<<endl;

            // for(auto it= p.begin(); it != p.end();it++)
            // {
            //     cout<<*it;
            // }
            // cout<<endl;

        }
        if(!flag)
            cout<<"NO"<<endl;


        // for(auto it = h.begin(); it != h.end(); it++)
        // {
        //     for(auto it1 = p.begin(); it1 != p.end(); it1++)
        //     {
        //         if(*it == *it1)
        //         {
        //             front = it-h.begin();
        //             goto q;
        //         }
        //     }
        // }
        // q:
        // for(auto it = h.end()-1; it >= h.begin(); it--)
        // {

        //     for(auto it1 = p.end()-1; it1 >= p.begin(); it1--)
        //     {
        //         if(*it == *it1)
        //         {
        //             rear = it-h.begin();
        //             goto l;
        //         }
        //     }
            
        // }
        // l:
        // cout<<endl<<front<<" "<<rear<<endl;
        // for(int i = front; i <=rear;i++)
        // {
        //     hash.push_back(h[i]);
        // }
        // sort(hash.begin(),hash.end());
        // sort(p.begin(),p.end());
        // if(hash == p)
        //     cout<<"YES\n";
        // else
        // {
        //     cout<<"NO\n";
        // }
        


    }
 
}