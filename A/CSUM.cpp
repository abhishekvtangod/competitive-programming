// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int q;cin>>q;
    while (q--)
    {
        int n,k;
        vector<int> v;
        cin>>n>>k;
        while (n--)
        {
            int c;cin>>c;
            v.push_back(c);

        }
        sort(v.begin(),v.end());
        int f=0;
        int j = (v.end()-1)-v.begin();
        for(int i=0; i <j;)
        {
                // cout<<v[i]<<" "<<v[j];

            if(v[i]+v[j] == k)
            {   
                cout<<"Yes\n";
                f=1;
                break;
            }
            else if (v[i]+v[j] > k)
            {
                j--;
            }
            else
            {
                i++;
            }
            
            
        }
        if(!f)
        {
            cout<<"No\n";

        }


    }
    

    return 0;
}