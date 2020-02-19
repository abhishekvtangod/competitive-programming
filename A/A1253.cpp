#include<iostream>
#include<vector>
using namespace std;
main()
{
   int t,x,n;
   cin>>t;
   while(t--)
   {    
   vector<int> a,b,d;

       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>x;
           a.push_back(x);
       }
       for(int i =0 ; i<n; i++)
       {
           cin>>x;
           b.push_back(x);

       }
       d.push_back(0);
       for(int i=0;i<n;i++)
       {
           d.push_back(b[i]-a[i]);
       }
       d.push_back(0);
       int count=0;
        for(int i=0;i<n+1;i++)
       {
           if(d[i] != d[i+1])
            count++;
            if(d[i] < 0 || d[i+1] <0 )
            {
                count =3;
                break;
            }    
            // cout<<"\t"<<d[i]<<"\t";
       }
            // cout<<count<<"\t";

        if(count > 2)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
        
   }
}