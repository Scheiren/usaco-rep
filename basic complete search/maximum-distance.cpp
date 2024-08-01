#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    long long power(long long a, long long b)
    {
        long long res = 1;
        while(b)
        {
            if(b & 1)res *= a;
            a = a * a;
            b >>= 1;
        }
        return res;
    }

    long long maximumDistance(long long n, vector<long long> x, vector<long long> y)
    {

        long long res = -1;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                res = max(res, power(x[i] - x[j], 2) + power(y[i] - y[j], 2));
            }
        }
        return res;
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    vector<long long> x(n), y(n);

    for(int i = 0 ; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0 ; i < n; i++)
    {
        cin >> y[i];
    }

    Solution temp;

    cout << temp.maximumDistance(n, x, y);

    return 0;
}
