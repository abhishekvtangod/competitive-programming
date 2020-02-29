#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    int q;
    int count=0;
    cin>>q;
    string s;
    while (q--)
    {
        cin>>s;
        if(s == "Tetrahedron")
            count+=4;
        else if (s == "Cube")
            count+=6;
        else if (s == "Octahedron")
            count+=8;
        else if (s == "Dodecahedron")
            count+=12;
        else if (s == "Icosahedron")
            count+=20;

    }
    cout<<count;
    
    return 0;
}