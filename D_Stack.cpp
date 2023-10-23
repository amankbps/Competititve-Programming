#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
    stack<int> myStack;
    int q;
    int v;
    string s;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> v;
            myStack.push(v);
        }
        else if (s == "pop")
        {
            myStack.pop();
        }
        else if (s == "top")
        {
            cout << myStack.top() << "\n";
        }
    }
    return 0;
}