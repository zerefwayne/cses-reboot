#include <iostream>

using ll = std::int64_t;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll N;
    std::cin >> N;

    for (ll i = 0, x, y, s, res; i < N; i++)
    {
        std::cin >> x >> y;
        x--;
        y--;

        s = x > y ? x : y;

        if (s % 2 == 0)
        {
            // loop goes CCW
            if (x < y)
            {
                res = ((s + 1) * (s + 1)) - x;
            }
            else
            {
                res = (s * s) + 1 + y;
            }
        }
        else
        {
            // loop goes CW
            if (x < y)
            {
                res = (s * s) + 1 + x;
            }
            else
            {
                res = ((s + 1) * (s + 1)) - y;
            }
        }

        std::cout << res << '\n';
    }

    return 0;
}