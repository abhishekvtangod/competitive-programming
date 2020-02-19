#include<iostream>
using namespace std;
typedef long long ll;
// int check(ll a[],ll i,ll j);
int check(int a[],int i,int j);
int main()
{
    int n,i,k=0,a[100],s1[100],s2[100],s3[100];
    ll count[4]={0};
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

    for(i=0;i<n;i++)
        {
            cout<<endl<<a[i]<<endl;
        }

    cout<<":end";



    for( i=n-1;i>=0 && (a[i]!=0);i--)
    {
        count[2]++;
        s3[k++]=a[i];
        cout<<a[i];
        // cout<<":end";
    }

    s3[k]=a[i];
    i--;
    ll m=0;
    ll no=1,f=1;k=0;
    while(f)
    {
        f=check(a,k,i);
        for(ll j=k;j<f;j++)
        {
            count[0]++;
            s1[m++]=a[j];
            cout<<a[j]<<" ";
        }
    }
    cout<<'\n';
    m=0;
    for(;k<i;k++)
    {
        count[1]++;
        s2[m++]=a[k];
        cout<<a[k]<<" ";
    }
}
int check(int a[],int i,int j)
{
    ll np=1;
    // for(;i<j;i++)
    while(np>0 && i<j)
    {
        np=np*a[i++];
    }
    if(i==j)
        return -1;
    return i;
}