#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    map<int, int> mp;
    void queries(int typeOfQueries)
    {
        if(typeOfQueries == 0)
        {
            int k, v;
            cin >> k >> v;
            mp[k] = v;
        }
        else
        {
            int k;
            cin >> k;
            cout << mp[k] << "\n";
        }
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int q;
    cin >> q;

    Solution temp;

    while(q--)
    {
        int typeOfQueries = -1;
        cin >> typeOfQueries;
        temp.queries(typeOfQueries);
    }

    return 0;
}
