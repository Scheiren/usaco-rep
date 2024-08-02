#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    long long madeUp(int n)
    {
        
    }

}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << b - a + d - c - max(0, min(b, d) - max(a, c));

    return 0;
}
