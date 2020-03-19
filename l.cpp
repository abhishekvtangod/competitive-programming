    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<set>
    using namespace std;
    typedef long long ll;
    int main()
    {
        ll cn,n,t;cin>>n;cn=n;
        vector<ll> v;
        while (cn--)
        {
            cin>>t;v.push_back(t);
        }
        sort(v.begin(),v.end());
        cout<<"\n\n";
        for(auto i=v.begin();i!=v.end();i++)
            cout<<*i<<" ";
            cout<<"\n";
        cout<<max(v[n-1]+v[0],v[1]+v[n-2])<<"\n";
        for(int i=0;i<n/2;i++)
            cout<<v[i]+v[n-i-1<<" ";]
        /*
        if(n>=4)
        cout<<max(v[n-1]+v[0],v[1]+v[n-2])<<"\n";
        else if(n>=2)
        cout<<v[0]+v[n-1]<<"\n";
        else if(n==1)
        cout<<v[0]<<"\n";
        else 
        cout<<0<<"\n";
        */
    }