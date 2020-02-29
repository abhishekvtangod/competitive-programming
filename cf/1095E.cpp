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
    int n;
    char x;
    cin>>n;    
    string s[n];
    int i = 0;
    for(int i =0; i <n;i++)
    {
        cin>>s[i];
        i++;
    }

    int m = s.size();
    while (m--)
    {
    
    vector<char> v;
    n = s[i].size();
    while (n--)
    {
        x= 
        if(v.empty())
        {   
            v.push_back(x);
        }   
        else if (x == '(')
        {
            
            v.push_back(x);
        
        
        }
        else if (x == ')')
        {
            if (*(v.end()-1) == '(')
            {

                v.pop_back();

            }
            else
            {
                v.push_back(x);
            
            }
            
            
        }
        else if (x == '[')
        {
            
            v.push_back(x);
        
        
        }
        else if (x == ']')
        {
            if (*(v.end()-1) == '[')
            {

                v.pop_back();

            }
            else
            {
                v.push_back(x);
            
            }
            
            
        }        
        else if (x == '{')
        {
            
            v.push_back(x);
        
        
        }
        else if (x == '}')
        {
            if (*(v.end()-1) == '}')
            {

                v.pop_back();

            }
            else
            {
                v.push_back(x);
            
            }
            
            
        }

        
        

    }
    
    }
    
        for(auto it = v.begin(); it != v.end(); it++)
        {
            cout<<*it<<" ";
        }    
        cout<<endl;

        // int left = count(v.begin(),v.end(),'(');
        // int right = count(v.begin(),v.end(),')');
        


}