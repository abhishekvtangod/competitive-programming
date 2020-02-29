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
   int n,m,x;
   cin>>n>>m;
   vector<int> c,v;
   while (n--)
   {
       cin>>x;
       c.push_back(x);
   }
   while (m--)
   {
       cin>>x;
       v.push_back(x);
   }
    int pos = 0;
   for(int i =0; i < c.size() ;i++)
   {
    


       if(v[pos] >= c[i] && pos<v.size())
       {
           pos++;
       }
       
   }
   cout<<pos;
   
   
}