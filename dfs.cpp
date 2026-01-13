#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>& g,int start,vector<int>& vis)
{
    vis[start]=1;
    cout<<" "<<start<<" ";
    
    for(auto child:g[start])
    {
        if(!vis[child])
        {
            vis[child]=1;
            dfs(g,child,vis);
        }
    }

}

using namespace std;
int main()
{
    int e,v;
    //enter no of vertices
    cin>>v;
    vector<vector<int>> g(v);

    //enter no of edges
    cin>>e;
    cout<<"enter edges in form of adjacency matrix (eg. 0 1 or 1 0 if vertices 0,1 have edge): ";
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> vis(v,0);
    cout<<"\nDFS: ";
    dfs(g,0,vis);
    return 0;
}