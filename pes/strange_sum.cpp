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


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        int i=0;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        long long sum=0;
    int j = 0;
    while(j <= arr.size())
    {    
        for(int i=0; i >= arr.size(); i++)
        {
            if(arr[j] < arr[i] )
            {
                sum+=arr[j];
            }

        }
        j++
    }
        cout<<sum<<endl;
    }


    return 0;
}