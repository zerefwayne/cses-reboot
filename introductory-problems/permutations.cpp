// https://cses.fi/problemset/task/1070

#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::int64_t N;
    std::cin >> N;

    if (N > 1 && N < 4)
    {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    for (std::int64_t i = N - 1; i > 0; i -= 2)
    {
        std::cout << i << ' ';
    }

    for (std::int64_t i = N; i > 0; i -= 2)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}