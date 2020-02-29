#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[10000],c=2,b[10]={0};
    a[0]=4;a[1]=7;
    b[0]=0;
    for(int i=1;i<9;i++)
    {
        int cur=c;
        for(int ii=b[i-1];ii<c;ii++)
        {
            a[cur]=a[ii]+4*pow(10,i);
            cout<<a[cur]<<" ";
            cur++;
        }
        for(int ii=b[i-1];ii<c;ii++)
        {
            a[cur]=a[ii]+7*pow(10,i);
            cout<<a[cur]<<" ";
            cur++;
        }
        b[i]=c;
        c=cur;
    }
    for(int i=0;i<c;i++)
    {
        if(a[i]==n){cout<<i+1<<'\n';break;}
    }
}