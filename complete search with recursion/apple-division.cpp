#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    long long weightDifference(int n, vector<long long> apples)
    {
        int mask = 1;
        long long ans = 20 * INF;

        for(; mask < (1 << n) ; mask++)
        {
            long long groupA = 0, groupB = 0;
            for(int i = 0 ; i < n ; i++)
            {
                if((mask >> i) & 1)
                {
                    groupA += apples[i];
                }
                else
                {
                    groupB += apples[i];
                }
            }
            ans = min(ans, abs(groupA - groupB));
        }
        return ans;
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    vector<long long> apples(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> apples[i];
    }

    Solution temp;

    cout << temp.weightDifference(n, apples);

    return 0;
}
