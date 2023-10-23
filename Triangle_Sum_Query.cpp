#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int mod_pow(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
        {
            result = (1LL * result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int mod_inv(int x)
{
    return mod_pow(x, MOD - 2);
}

int countPermutations(int N)
{
    vector<int> factorial(N + 1, 1);
    vector<int> prefix_sum(N + 2, 0);
    for (int i = 2; i <= N; ++i)
    {
        factorial[i] = (1LL * factorial[i - 1] * i) % MOD;
    }

    for (int i = 1; i <= N; ++i)
    {
        prefix_sum[i + 1] = (prefix_sum[i] + factorial[i]) % MOD;
    }

    int ans = 0;
    for (int K = 0; K <= N; ++K)
    {
        int chooseK = (1LL * factorial[N] * mod_inv(factorial[K]) % MOD * mod_inv(factorial[N - K])) % MOD;
        int permutationsWithKDistance = (1LL * chooseK * prefix_sum[N - K + 1]) % MOD;
        ans = (ans + permutationsWithKDistance) % MOD;
    }

    return ans;
}

int main()
{
    int N;
    cin >> N;

    int Q;
    cin >> Q;

    cout << countPermutations(N) << endl;

    for (int i = 0; i < Q; ++i)
    {
        int K;
        cin >> K;
        cout << countPermutations(N) - countPermutations(K - 1) << endl;
    }

    return 0;
}
