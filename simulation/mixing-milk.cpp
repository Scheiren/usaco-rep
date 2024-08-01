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

    vector<int> bucketVolume(3), milkInBucket(3);

    for(int i = 0 ; i < 3 ; i++)
    {
        cin >> bucketVolume[i] >> milkInBucket[i];
    }

    for(int i = 0 ; i < 100 ; i++)
    {
        int curr = i % 3, next = (i + 1) % 3;

        if(bucketVolume[next] - milkInBucket[next] <= milkInBucket[curr])
        {
            milkInBucket[curr] -= (bucketVolume[next] - milkInBucket[next]);
            milkInBucket[next] = bucketVolume[next];
        }
        else
        {
            milkInBucket[next] += milkInBucket[curr];
            milkInBucket[curr] = 0;
        }
    }

    cout << milkInBucket[0] << "\n" << milkInBucket[1] << "\n" << milkInBucket[2];

    return 0;
}
