// https://cses.fi/problemset/task/1083

#include <iostream>

using ll = std::int64_t;

int main()
{
    // io optimization
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll N, actual_sum, expected_sum;

    std::cin >> N;

    actual_sum = 0;
    expected_sum = N * (N + 1) / 2;

    for (ll i = 0, current; i < N - 1; ++i)
    {
        std::cin >> current;
        actual_sum += current;
    }

    std::cout << expected_sum - actual_sum << '\n';
}