#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
main()
{
    int n;
    char x;
    cin>>n;
    vector<char> v;
    while (n--)
    {
        cin>>x;
        v.push_back(x);
    }
    int sum =0;
    int m = (-1 + sqrt(1+8 * v.size()))/2;
    for(int i = 1; i <= m ;i++)
    {   

        cout<<v[sum];
        sum += i;
    }
    // cout<<v[sum];    

}