#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> s(arr, arr + n);
    int j = 0;
    for (int i = -m; i <= m; i++)
    {
        if (s.find(i) != s.end())
            continue;
        else
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}