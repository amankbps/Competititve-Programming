
#include <bits/stdc++.h>
using namespace std;

int MaxProduct(vector<int> arr)
{
    int n = arr.size();
    int result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];

        for (int j = i + 1; j < n; j++)
        {

            result = max(result, mul);
            mul *= arr[j];
        }

        result = max(result, mul);
    }
    return result;
}

signed main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << MaxProduct(v) << "\n";
    return 0;
}
