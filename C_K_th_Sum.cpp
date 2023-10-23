#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> brr[j];
    }
    sort(arr, arr + n);
    sort(brr, brr + n);
    long long low = 0, high = arr[n - 1] + brr[n - 1], ans = -1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long x = mid, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            long long index = upper_bound(brr, brr + n, x - arr[i]) - brr;

            cnt += index;
        }
        if (cnt >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}