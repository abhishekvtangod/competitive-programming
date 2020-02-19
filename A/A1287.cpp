#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
main()
{
   ll q,n;
   char x;
   cin>>q;

    while (q--)
    {   ll max=0,flag=0;
                ll count = 0;
        vector<char> v;
        cin>>n;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }

        for(auto it = v.end()-1; it >= v.begin(); it--)
        {
            if(*it == 'A')
            {
                if(max < count)
                {
                    max = count;
                }
                count =0;
                flag = 1;

            }                
            if(*it == 'P')
            {
                count++;
                v.pop_back();
            }

        }
        if(!flag)
            cout<<0<<endl;
        else
        {
                cout<<max<<endl;

        }
                
    }
    

}