#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, s;
    cin >> n >> s;

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int p = s - (i + j);
            if (p >= 0 && p <= n)
                count++;
        }
    }
    cout << count;
    return 0;
}
