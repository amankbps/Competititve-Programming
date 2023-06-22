#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alloc[20][20];
    int maxi[20][20];
    int need[20][20];
    int tot[10];
    int r, n, avai[10], avlast[10];

    cout << "enter the total number of process";
    cin >> n;

    cout << "enter the total number of resources";
    cin >> r;
    cout << "enter the allocation matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> alloc[i][j];
        }
    }
    cout << "enter the maximum matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> maxi[i][j];
        }
    }
    cout << "Need matrix is\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < r; j++)
        {
            need[i][j] = maxi[i][j] - alloc[i][j];
            cout << need[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "enter the total resources";
    for (int i = 0; i < r; i++)
        cin >> tot[i];

    // available matrix finding
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += alloc[j][i];
        }
        avai[i] = sum;
    }
    cout << "available matrix is";
    for (int i = 0; i < r; i++)
        cout << avai[i] << " ";
    for (int i = 0; i < r; i++)
    {
        avlast[i] = tot[i] - avai[i];
    }
    cout << "available numbers";
    for (int i = 0; i < r; i++)
    {
        cout << avlast[i] << " ";
    }
    vector<int> safe(20), visi(20, 0);

    int k = 0, c = 0, loop = 1;
    while (loop < n && c != n)
    {
        loop++;
        for (int i = 0; i < n; i++)
        {
            int j;
            if (visi[i] == 0)
            {
                for (j = 0; j < r; j++)
                    if (need[i][j] > avlast[j])
                        break;

                if (j == r)
                {
                    for (int j = 0; j < r; j++)
                    {
                        avlast[j] += alloc[i][j];
                    }
                    visi[i] = 1;
                    safe[k++] = i;
                    c++;
                }
            }
        }
    }

    if (c == n)
    {
        cout << "safe";
        for (int i = 0; i < n; i++)
            cout << safe[i] << "->";
    }
    else
        cout << "not safe";

    return 0;
}
