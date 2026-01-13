#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<vector<int>>& g,int start)
{
        vector<int> vis(g.size(),0);
        queue<int> q;
        vis[start]=1;
        q.push(start);

        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            cout<<" "<<cur<<" ";

            for(auto child: g[cur])
            {
                if(!vis[child])
                {
                    vis[child]=1;
                    q.push(child);
                }
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
    cout<<"\nBFS: ";
    bfs(g,0);
    return 0;
}