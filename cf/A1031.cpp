#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int r,c,k,s=0;
    cin>>r>>c>>k;
    int i=0;
    while (k--)
    {
        s+=(((r-i*2)*2)+(((c-i*2)-2)*2));
        i+=2;
    }
    
    cout<<s;

/*   ---or---    
    while(k-- && m&&n)
    {
        ans+=2*(m+n)-4;
        m-=4;
        n-=4;
    }    
*/


    return 0;
}