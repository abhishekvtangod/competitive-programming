    #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int a,b,c,m,n,o,p;
        
    cin>>m>>n>>o>>p;
    int arr[] = {m,n,o,p};
    // int n =sizeof(arr)
    sort(arr, arr+4);
    m = arr[0];
    n = arr[1];
    o = arr[2];
    p = arr[3];
    cout<<(m-o+n)/2<<" "<<(m-n+o)/2<<" "<<(p-m);

}