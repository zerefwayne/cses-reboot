#include <iostream>

using ll = std::int64_t;

int main()
{

    ll N;
    std::cin >> N;

    ll sum = N * (N + 1) / 2;

    if (sum % 2 != 0)
    {
        std::cout << "NO\n";
        return 0;
    }

    std::cout << "YES\n";

    if (N % 2 != 0)
    {
        ll count = ((N - 7) / 4 + 1);

        std::cout << 2 * count + 1 << '\n';

        for (ll i = 1; i <= count; i++)
        {
            std::cout << i << ' ' << N - i << ' ';
        }

        std::cout << N << '\n';

        std::cout << '\n'
                  << N - 1 - 2 * count << '\n';

        for (ll i = count + 1; i <= 2 * count + 1; i++)
        {
            std::cout << i << ' ' << N - i << ' ';
        }
    }
    else
    {
        ll count = N / 4;
        std::cout << 2 * count << '\n';

        for (ll i = 1; i <= count; i++)
        {
            std::cout << i << ' ' << N - i + 1 << ' ';
        }

        std::cout << '\n'
                  << 2 * count << '\n';

        for (ll i = count + 1; i <= 2 * count; i++)
        {
            std::cout << i << ' ' << N - i + 1 << ' ';
        }

        std::cout << '\n';
    }
    return 0;
}