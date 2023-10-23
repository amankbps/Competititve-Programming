#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    long long int mini = -1;
    stack<long long int> s;

public:
    MinStack() {}

    void push(int x)
    {
        if (s.empty())
        {
            mini = x;
            s.push(x);
        }
        else if (x >= mini)
            s.push(x);
        else
            s.push(2LL * x - mini), mini = x;
    }

    void pop()
    {
        if (s.empty())
            return;
        if (s.top() >= mini)
            s.pop();
        else
        {
            mini = (2 * mini - s.top());
            s.pop();
        }

        if (s.empty())
            mini = -1;
    }

    int top()
    {
        if (s.empty())
            return -1;
        if (s.top() < mini)
        {
            return mini;
        }
        else
            return s.top();
    }

    int getMin()
    {
        return mini;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    MinStack s;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (op == "pop")
        {
            s.pop();
        }
        else if (op == "top")
        {
            cout << s.top() << "\n";
        }
        else if (op == "getMin")
        {
            cout << s.getMin() << "\n";
        }
    }

    return 0;
}