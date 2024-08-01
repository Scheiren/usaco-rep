#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    vector<string> perm;
    void allStringPermutation(string s)
    {
        sort(s.begin(), s.end());

        do
        {
            perm.push_back(s);
        } while (next_permutation(s.begin(),s.end()));
        for(string str : perm)
        {
            cout << str << "\n";
        }
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    Solution temp;

    temp.allStringPermutation(s);

    return 0;
}
