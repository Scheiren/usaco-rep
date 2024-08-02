#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    map<int, int> mp;

    int n;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    cout << mp.size();

    Solution temp;



    return 0;
}
