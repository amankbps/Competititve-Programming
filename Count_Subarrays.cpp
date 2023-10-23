#include <bits/stdc++.h>
using namespace std;
#define int long long
int countsetbit(int n)
{
    int cnt = 0;
    while (n > 0)
    {

        cnt++;
        n = n & (n - 1);
    }
    return cnt;
}
signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0, odd = 0, even = 1, pre = 0;

        for (auto i : v)
        {
            pre ^= i;
            if (countsetbit(pre) % 2 == 1)
            {
                odd++;
                ans += even;
            }
            else
            {
                even++;
                ans += odd;
            }
        }

        cout << ans << "\n";
    }
}