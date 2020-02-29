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

    int n,x;
    cin>>n;
    while (n)
    {
        string s;
        cin>>s;
        ll k = 0;
        ll t_rows = s.size()/n;
        char v[t_rows][n];

        for(int i = 0; i < t_rows; i++)
        {
            if(i % 2 == 0)
            {
                for(ll j = 0; j < n; j++)
                {
                    v[i][j] = s[k++];
                }
            }
            else
            {
                for(ll j = n-1; j >= 0; j--)
                {
                    v[i][j] = s[k++];
                }
            }

        }
        for(int i =0; i < n; i++)
        {
            for(int j =0; j < t_rows; j++)
            {
                cout<<v[j][i];
            }
        }
        cout<<endl;
        
        cin>>n;
    }
    


    return 0;
}