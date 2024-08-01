#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    freopen("file.inp", "r", stdin);

    int n, bestGuess = -1, guess = 0;
    cin >> n;

    vector<int> a(n), b(n), g(n), pos(4, 0);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] >> b[i] >> g[i];
    }
    
    for(int i = 1 ; i <= 3 ; i++)
    {
        pos[i] = 1;
        guess = 0;

        for(int j = 0 ; j < n ; j++)
        {
            swap(pos[a[j]], pos[b[j]]);
            guess += pos[g[j]];
        }

        bestGuess = max(bestGuess, guess);

        pos = {0, 0, 0, 0};
    }

    cout << bestGuess;

    return 0;
}
