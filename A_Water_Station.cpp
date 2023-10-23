#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0, min = 100;
    for (int i = 0; i <= 100; i += 5)
    {
        if (abs(n - i) < min)
        {
            ans = i;
            min = abs(n - i);
        }
    }
    cout << ans << "\n";
    return 0;
}