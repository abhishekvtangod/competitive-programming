// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main()
// {
//     long long int q;

//     char a;
//     vector<char> v;
//     cin>>q;

//     long long int m = q/2;
//     while (q--)
//     {
//         cin>>a;
//         v.push_back(a);   
//     }
   
//     long long int count = 0;  


//     for(long long int i = 0; i != v.size(); i+=2)
//     {   if((v[i] == 'a' && v[i+1] == 'b') || (v[i] == 'b' && v[i+1] == 'a')) 
//             // cout<<v[i]<<v[i+1];
//             continue;
//         else
//         {
//             v.at(i) = 'a'; v.at(i+1) = 'b';
//             // cout<<v[i]<<v[i+1];
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         cout<<*i;
//     }
    
//     cout<<endl;
//     return 0;
// }


#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll i=0,count=0,ca=0,cb=0;
    for(int p=1;p<s.length();p+=2)
    {
                if((s[p]-s[p-1])==0) {s[p-1]='a'+'b'-s[p-1];count++;}
    }
    cout<<count<<'\n'<<s<<'\n';
}