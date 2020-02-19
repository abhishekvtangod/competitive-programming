#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
int main()
{
    int m,n,s,t,X,Y,input,sum=0;
    cin>>t;

    while (t--)
    {
        
        cin>>n>>m;
        cin>>X>>Y>>s;
        int sum_x=0,sum_y=0,prev=0;
        
        for(int i =0; i < X;i++)
        {
            cin>>input;
            
            
            
            sum_x += (input-prev-1)/s; 
            prev = input;

        }
    
        sum_x += (n-prev)/s;



        prev = 0;
 
        for(int i =0; i < Y;i++)
        {
            cin>>input;
            
            
            
            sum_y += (input-prev-1)/s; 
            prev = input;

        }
    
        sum_y += (m-prev)/s;

        cout<<sum_x*sum_y<<endl;

    }
    return 0;

}