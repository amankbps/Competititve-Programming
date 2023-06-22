#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int W, H, N;
    cin >> W >> H >> N;

    vector<int> px(N);
    vector<int> py(N);
    for (int i = 0; i < N; i++)
    {
        cin >> px[i] >> py[i];
    }

    int A, B;
    cin >> A >> B;

    vector<int> ax(A);
    vector<int> by(B);
    for (int i = 0; i < A; i++)
    {
        cin >> ax[i];
    }
    for (int i = 0; i < B; i++)
    {
        cin >> by[i];
    }

    vector<int> row(W + 1, 0);
    vector<int> col(H + 1, 0);

    for (int i = 0; i < N; i++)
    {
        row[px[i]]++;
        col[py[i]]++;
    }

    vector<int> rowPrefix(W + 1, 0);
    vector<int> colPrefix(H + 1, 0);

    for (int i = 1; i <= W; i++)
    {
        rowPrefix[i] = rowPrefix[i - 1] + row[i];
    }

    for (int i = 1; i <= H; i++)
    {
        colPrefix[i] = colPrefix[i - 1] + col[i];
    }

    int minStrawberries = N;
    int maxStrawberries = 0;

    for (int i = 0; i < A; i++)
    {
        int strawberriesLeft = rowPrefix[ax[i]];
        int strawberriesRight = N - rowPrefix[ax[i]];
        minStrawberries = min(minStrawberries, min(strawberriesLeft, strawberriesRight));
        maxStrawberries = max(maxStrawberries, max(strawberriesLeft, strawberriesRight));
    }

    for (int i = 0; i < B; i++)
    {
        int strawberriesTop = colPrefix[by[i]];
        int strawberriesBottom = N - colPrefix[by[i]];
        minStrawberries = min(minStrawberries, min(strawberriesTop, strawberriesBottom));
        maxStrawberries = max(maxStrawberries, max(strawberriesTop, strawberriesBottom));
    }

    cout << minStrawberries << " " << maxStrawberries << endl;

    return 0;
}
