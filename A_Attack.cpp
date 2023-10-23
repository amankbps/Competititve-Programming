

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alloc[20][20], maxi[20][20], need[20][20];
    int rec[20], aval[20];
    int p, r;
    cout << "enter the number of proceess and resources\n";
    cin >> p >> r;

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= r; j++)
            cin >> alloc[i][j];
    }

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= r; j++)
            cin >> maxi[i][j];
    }

    for (int i = 1; i <= r; i++)
        cin >> rec[i];

    // need matrix
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            need[i][j] = maxi[i][j] - alloc[i][j];
            cout << need[i][j] << " ";
        }
        cout << "\n";
    }
    // to find avalible matrix

    for (int i = 1; i <= r; i++)
    {
        int sum = 0;
        for (int j = 1; j <= p; j++)
        {
            sum += alloc[j][i];
        }
        aval[i] = rec[i] - sum;
        cout << aval[i] << " ";
    }

    int loop = 1, c = 0, k = 0;
    int vis[20]{}, safe[20]{};

    while (loop < p && c != p)
    {
        loop++;
        for (int i = 1; i <= p; i++)
        {
            int j;
            if (vis[i] == 0)
            {
                for (j = 1; j <= r; j++)
                {
                    if (need[i][j] > aval[j])
                    {
                        break;
                    }
                }
                if (j == r + 1)
                {
                    for (j = 1; j <= r; j++)
                        aval[j] += alloc[i][j];
                    vis[i] = 1;
                    c++;
                    safe[k++] = i;
                }
            }
        }
    }

    if (c == p)
    {
        cout << "safe state\n";
        for (int i = 0; i < p; i++)
        {
            cout << safe[i] << "-->";
        }
    }
    else
        cout << "Not safe\n";
}