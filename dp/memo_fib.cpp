#include<iostream>
using namespace std;
// int fibo(int,int);
// int fibo(int n,int memo[])
// {
//     int result;
//     if(memo[n] != 0)
//         return memo[n];
//     if(n == 1 || n==2)
//         result = 1;
//     else
//         result = fibo(n-1) + fibo(n-2);
    
//     memo[n] = result;

//     return result;
        
// }


main()
{   int n;
    cin>>n;
    int memo[3] = {0};
    for(int i = 0; i < n; i++)
        cout<<memo[3];
    // cout<<fibo(n,memo);
}