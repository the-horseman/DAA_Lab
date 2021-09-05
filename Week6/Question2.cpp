#include <bits/stdc++.h>

#define mod 1000000007
#define INF 2147483637
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

bool bfs(vi adj[], int u, int n, vi col)
{
    static vi visited(n);
    visited[u] = 1;
    static queue<int> q;
    q.push(u);
    col[u] = 1;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        int fc = col[u];
        if (fc == 1)
            fc = 2;
        else
            fc = 1;
        for (auto x : adj[u])
        {
            if (col[x] == 0 || col[x] == fc)
                col[x] = fc;
            else
                return false;
            if (visited[x] != 1)
            {
                visited[x] = 1;
                q.push(x);
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no = 1;
    cin >> no;
    for (int f = 0; f < no; f++)
    {
        int n = 5;
        cin >> n;
        vi adj[n + 1];
        vi col(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int x;
                cin >> x;
                if (x == 1)
                {
                    adj[i + 1].push_back(j + 1);
                }
            }
        }
        if (bfs(adj, 1, n + 1, col) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// 0 1 0 1
// 1 0 1 0
// 0 1 0 1
// 1 0 1 0

// 0 1 1 0 0
// 1 0 1 1 1
// 1 1 0 1 0
// 0 1 1 0 1
// 0 1 0 1 0