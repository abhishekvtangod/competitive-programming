// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=n*n/2;i++)
// 	{   
//         cout<<i<<" "<<(n*n)-i+1<<" ";
//         if(i % (n/2) == 0)
//             cout<<endl;
       
//     }
// }

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    ll a[n*n];
    for(ll i=0;i<n*n;i++)
    {
        a[i]=i+1;
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<(n*n)/2;j=j+n)
        {
            cout<<a[j]<<' ';
        }
        for(ll j=n*n-1-i;j>=(n*n)/2;j=j-n)
        {
            cout<<a[j]<<' ';
        }
        cout<<"\n";
    }
}