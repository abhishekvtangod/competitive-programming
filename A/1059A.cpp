#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
   long long int n,L,a,t,l,ll_sum=0;

   long long int start =0;
   long long int ans = 0;
   cin>>n>>L>>a;
//    vector<int> tt,ll;
   long long int *tt,*ll;
   tt = new long long int[n];
   ll = new long long int[n];
   for(int i =0;i < n ; i++)
   {
       cin>>t>>l;
    //    tt.push_back(t);
    //    ll.push_back(l);
        tt[i] = t;
        ll[i] = l;
        ll_sum += l;
   }
//    for(int i=0;i<n;i++)
//    {

//    }
    if(n == 0)
    {
        cout<<L/a;
    }
    else
    {
        
        start = (tt[0]) /a;
        ans =  (L-ll_sum-tt[0])/a;
        cout<<start+ans;    
    }
    
    // free(tt);
    // free(ll);

   
}