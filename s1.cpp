#include<iostream>
using namespace std;
int row,col;
string arr[105];
int visited[105][105]={0};
void visit(int i,int j)
{
    char ch=arr[i][j];
    for(int k=i;k<row;k++)
    {
        for(int l=j;l<col;l++)
        {
            int v=l;
            if(arr[k][l]==ch)
            {
                visited[k][l]=true;
                if(l>0 && arr[k][l-1]==ch && !visited[k][l-1])
                    visit(k,l-1);
                if(k>0 && arr[k-1][l]==ch && !visited[k-1][l])
                    visit(k-1,l);
            }
            else if(l>=v)
                break;
        }
    }

}
int count()
{
    int ans=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(visited[i][j]==0){
                visit(i,j);
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    cin>>row;
    int cn=row,i=0;
    while(cn--)
    {
        cin>>arr[i++];
    }
    col=arr[0].length();
    cout<<count()<<"\n";
}