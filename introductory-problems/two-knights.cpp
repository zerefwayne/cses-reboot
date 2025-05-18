#include <iostream>

using ll = std::int64_t;

int main()
{
    ll n;
    std::cin >> n;

    for (ll k = 1, res; k <= n; k++)
    {

        res = (((k * k) * (k * k - 1)) / 2) - (4 * (k - 1) * (k - 2));
        std::cout << res << '\n';
    }

    return 0;
}