#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5;

class Solution
{
public:
    void dfs(vector<int> &base, vector<int> &length, vector<int> &visited, int i, int &steps, queue<int> &q)
    {
        q.push(i);
        if (visited[i])
        {
            steps += length[i];
            return;
        }

        visited[i] = 1;
        steps++;
        dfs(base, length, visited, base[i], steps, q);
    }

    void solve()
    {
        int n;
        cin >> n;

        vector<int> base(n, 0);
        vector<int> visited(n, 0);
        vector<int> length(n, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            base[i] = --a;
        }

        for (int i = 0; i < n; i++)
        {
            if (visited[i])
            {
                continue;
            }

            int steps = 0;
            queue<int> q;
            dfs(base, length, visited, i, steps, q);

            int dec = 1;
            while (q.size())
            {
                if (q.front() == q.back())
                    dec = 0;

                length[q.front()] = steps;
                steps -= dec;
                q.pop();
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << length[i] << " ";
        }

        return;
    }

private:
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
