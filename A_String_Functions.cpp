#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--)
    {
        string t;
        cin >> t;

        if (t == "pop_back")
            s.pop_back();
        else if (t == "front")
            cout << s.front() << "\n";
        else if (t == "back")
            cout << s.back() << "\n";
        else if (t == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (t == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (t == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            cout << s.substr(l - 1, r - l + 1) << "\n";
        }
        else if (t == "print")
        {
            int l;
            cin >> l;
            cout << s[l - 1] << "\n";
        }
        else
        {
            char c;
            cin >> c;
            s += c;
        }
    }

    return 0;
}