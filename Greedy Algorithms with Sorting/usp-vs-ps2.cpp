#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    void solve()
    {
        int onlyusb, onlyps2, both;
        cin >> onlyusb >> onlyps2 >> both;

        int n;
        cin >> n;

        vector<long long> usb, ps2;

        for (int i = 0; i < n; i++)
        {
            long long a;
            string s;
            cin >> a >> s;

            if (s == "USB")
            {
                usb.push_back(a);
            }
            else
            {
                ps2.push_back(a);
            }
        }

        sort(usb.begin(), usb.end(), greater<long long>());
        sort(ps2.begin(), ps2.end(), greater<long long>());

        long long price = 0, pcWithMouse = 0;

        for (int i = 0; i < onlyusb; i++)
        {
            if (!usb.size())
            {
                break;
            }
            price += usb.back();
            pcWithMouse++;
            usb.pop_back();
        }

        for (int i = 0; i < onlyps2; i++)
        {
            if (!ps2.size())
            {
                break;
            }
            price += ps2.back();
            pcWithMouse++;
            ps2.pop_back();
        }

        vector<long long> mouse;
        for (int i = 0; i < usb.size(); i++)
        {
            mouse.push_back(usb[i]);
        }
        for (int i = 0; i < ps2.size(); i++)
        {
            mouse.push_back(ps2[i]);
        }

        sort(mouse.begin(), mouse.end(), greater<long long>());

        for (int i = 0; i < both; i++)
        {
            if (!mouse.size())
            {
                break;
            }
            price += mouse.back();
            pcWithMouse++;
            mouse.pop_back();
        }

        cout << pcWithMouse << " " << price;

        return;
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
