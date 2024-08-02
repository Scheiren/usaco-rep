#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    bool sumOfTwoValues(vector<int> v, int n, int targetSum)
    {
        map<int, int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            if(mp.find(targetSum - v[i]) != mp.end())
            {
                cout << i + 1 << " " << mp[targetSum - v[i]] + 1 << "\n";
                return true;
            }
            mp[v[i]] = i;
        }
        return false;
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> v(n, 0);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    Solution temp;

    if(!temp.sumOfTwoValues(v, n, x))
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
