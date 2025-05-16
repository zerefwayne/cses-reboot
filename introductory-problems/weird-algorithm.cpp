// https://cses.fi/problemset/task/1068

#include <iostream>

using ll = std::int64_t;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n;
    
    std::cin >> n;

    while (n != 1)
    {
        std::cout << n << ' ';
        n = (n % 2 == 0) ? n / 2 : (n * 3 + 1);
    }

    std::cout << 1 << '\n';
    return 0;
}
