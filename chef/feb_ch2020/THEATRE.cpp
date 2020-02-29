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
    ll profit=0;
    ll t;cin>>t;
    while(t--)
    {
        ll n,y;
        char x;
        cin>>n;
        int a[4][4]={0};
        for(ll i = 0; i <n; i++)
        {
            cin>>x>>y;
            if(y == 12)
                y=0;
            else if (y == 3)
            {
                y=1;
            }
            else if (y == 6)
            {
                y=2;
            }
            else if (y == 9)
            {
                y=3;
            }
            a[(int)(x-'A')][y]++;

        }
        // for(int i =0;i<4;i++)
        // {
        //     for(int j =0; j < 4; j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }cout<<endl;
        // }

        ll answer=0;
        ll cnter=0;
        if(a[0][0] == 0)
            cnter++; 
        if(a[1][1] == 0)
            cnter++;
        if(a[2][2] == 0)
            cnter++;
        if(a[3][3] == 0)
            cnter++;   
        ll sum=a[0][0]+a[1][1]+a[2][2]+a[3][3]-100*cnter;
        // memoization
        ll base[4] = {25,50,75,100};
        ll ans[5]={0};
        
        for(int i = 0; i < 4; i++)
        {   
        ll memo[5]={0};

            ll m=0;
            memo[0] = a[0][i];
            for(int j =0 ; j < 4; j++)
            {
                if(i == j)
                    continue;
                memo[1] = a[1][j];
                
                for(int k =0; k<4; k++)
                {
                    if(j == k || k == i)
                        continue;
                 
                    memo[2] = a[2][k];
                 
                    for(int l = 0; l <4; l++)
                    {
                        if(k == l || l == i || l == j)
                            continue;
        //                 // mem[memo++]=sum;
                        memo[3] = a[3][l];
        //                 // sort(memo, memo+4);
        //                 // sum += memo[0]*base[0] + memo[1]*base[1] +memo[3]*base[3] +memo[2]*base[2]; 
                        // cout<<"----\n";
                        // cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;                  
                        ans[0]=a[0][i];
                        ans[1]=a[1][j];
                        ans[2]=a[2][k];
                        ans[3]=a[3][l];
                        ll cnt=0;
                        if(ans[0] == 0)
                            cnt++; 
                        if(ans[1] == 0)
                            cnt++;
                        if(ans[2] == 0)
                            cnt++;
                        if(ans[3] == 0)
                            cnt++;       
                        sort(ans,ans+4);
                        ll k = ans[0]*25+ans[1]*50+ans[2]*75+ans[3]*100-100*cnt;

                        sum = max(sum, k);
                        answer=sum;
                        // cout<<sum<<" "<<k<<endl;
                        // cout<<memo[0]<<" "<<memo[1]<<" "<<memo[2]<<" "<<memo[3]<<endl;                  
        //                 // m=0;
                    }
                    

                }
                
            }
            
        }

        cout<<answer<<endl;
        profit += answer;
        

    }
    cout<<profit<<endl;
    return 0;
}