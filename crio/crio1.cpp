#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<unordered_set>

typedef long long int ll;

using namespace std;



int main()
{
    long int q,x,n,m,c;
    long double k;
    cin>>q;
    while(q--)
    {
        vector<long double> v;
        long double tsum = 0;
        cin>>n>>m>>c;
        while (c--)
        {
            cin>>k;
            tsum+=k;
            v.push_back(k);
        }

        long int x = min(n,m);
        long int count = 0;

        sort(v.begin(),v.end());
        long double sum = 0;
        auto it = v.end()-1;
        if(tsum*2 < x)
        {
            // cout<<"-1"<<endl;
            count = -1;
            goto o;
        }
      
        while (sum < x)
        {   
            sum+= (long double)((*it)*2);
            it--;
            count++;
            cout<<"sum:"<<sum<<endl;
        }
        o:
        cout<<count<<endl;

    }

    return 0;
}