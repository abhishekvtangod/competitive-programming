#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
   int q,r,g,b;
   cin>>q;
   while(q--)
   {
   vector<int> v;

       cin>>r>>g>>b;
        v.push_back(r);
        v.push_back(g);
        v.push_back(b);
        sort(v.begin(),v.end());
        r = v[0];
        g = v[1];
        b = v[2];

       if(b <=r+g+1)
       {
           cout<<"YES\n";
       }
       else
       {
           cout<<"NO\n";
       }
       
       
   }
 
}