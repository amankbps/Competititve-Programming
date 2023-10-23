#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // input in string
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;

        // to get value of k
        int k;
        if (a[0] < b[0])
            k = b[0] - a[0];
        else
            k = (26 - (a[0] - 'a') + (b[0] - 'a'));

        for (auto i : c)
        {
            int p = (i - 'a');
            p += k;
            p %= 26;
            cout << char(p + 'a');
        }
        cout << "\n";
    }
    return 0;
}