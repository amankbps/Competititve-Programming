

#include <bits/stdc++.h>
using namespace std;
int closesttoleft(int *ar, int n, int val)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ar[mid] > val)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        int val;
        cin >> val;
        int res = closesttoleft(a, n, val);
        cout << res << "\n";
    }
    return 0;
}
