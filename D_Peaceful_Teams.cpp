#include <iostream>
#include <vector>

long long choose(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }

    long long result = 1;
    for (int i = 1; i <= k; i++)
    {
        result *= n--;
        result /= i;
    }
    return result;
}

int main()
{
    int N, M, T;
    std::cin >> N >> M >> T;

    std::vector<std::vector<int>> pairs(T + 1, std::vector<int>(T + 1, 0));

    for (int i = 0; i < M; i++)
    {
        int A, B;
        std::cin >> A >> B;
        pairs[A][B] = 1;
        pairs[B][A] = 1;
    }

    long long ans = choose(N - 1, T - 1);

    for (int i = 1; i <= T; i++)
    {
        for (int j = i + 1; j <= T; j++)
        {
            ans -= pairs[i][j] * choose(N - 2, T - 2);
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
