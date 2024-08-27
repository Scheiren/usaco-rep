#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;
 
class Solution
{
public:
    vector<vector<int>> graph;
    vector<int> visited, node;
 
    void dfs(int idx)
    {
        visited[idx] = 1;
 
        for (int x : graph[idx])
        {
            if (visited[x])
                continue;
 
            dfs(x);
        }
    }
 
    void bfs(int idx)
    {
        visited[idx] = 1;
        stack<int> st;
 
        for (int x : graph[idx])
        {
            if (visited[x])
                continue;
 
            visited[x] = 1;
            st.push(x);
        }
        while (st.size())
        {
            bfs(st.top());
            st.pop();
        }
    }
 
    void solve()
    {
        int n, m;
        cin >> n >> m;
 
        for (int i = 0; i <= n; i++)
        {
            graph.push_back(vector<int>());
            visited.push_back(0);
        }
 
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
 
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                bfs(i);
                node.push_back(i);
            }
        }
 
        cout << node.size() - 1 << "\n";
 
        for (int i = 1; i < node.size(); i++)
        {
            cout << node[i - 1] << " " << node[i] << "\n";
        }
 
        return;
    }
};
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    Solution().solve();
 
    return 0;
}
