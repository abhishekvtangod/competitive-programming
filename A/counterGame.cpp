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
    int n,x;
    cin>>n;
    int count = 1;
    
    while (n--)
    {
        count = 0;
        cin>>x;
        x = x-pow(2,(int)log2(x));
        cout<<x<<endl;
        while(x != 1)
        {
            
            count++;
            x/=2;
        }
        if(count%2 == 0)
        {
            cout<<"Louise"<<endl;
        }
        else
        {
                        cout<<"Richard"<<endl;

        }
        

    }
    
    

}