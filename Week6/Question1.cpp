#include<bits/stdc++.h>

#define ll long long
#define vi vector <int>
using namespace std;

void bfs(vi adj[], int u, int n)
{
    static vi visited(n);
    visited[u] = 1;
    static queue <int> q;
    q.push(u);
    cout<<u<<" ";
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (auto x : adj[u])
        {
            if (visited[x] != 1)
            {
                visited[x] =1;
                cout<<x<<" ";
                q.push(x);
            }
        }
    }
    
}

void dfs(vi adj[], int u, int n)
{
    static vi visited(n);
    if (visited[u] == 1)
        return;
    else
    {
        visited[u] = 1;
        cout<<u<<" ";
        for (auto x : adj[u])
        {
            dfs(adj, x, n);
        }
    }
}

int main()
{
    int n = 4;
    vi adj[n+1];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    cout<<"DFS => ";
    dfs(adj, 1, n+1);
    cout<<endl;
    cout<<"BFS => ";
    bfs(adj, 1, n+1);
    cout<<endl; 
    return 0;
}