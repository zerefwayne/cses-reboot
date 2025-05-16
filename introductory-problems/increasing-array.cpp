// https://cses.fi/problemset/task/1094

#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::int64_t N;
    std::int64_t num_moves_required = 0;

    std::cin >> N;

    std::int64_t prev_num, current_num;
    std::cin >> prev_num; // read the first element

    for (std::int64_t i = 1; i < N; ++i)
    {
        std::cin >> current_num;
        if (current_num < prev_num)
        {
            num_moves_required += (prev_num - current_num); // don't reassign prev_num if current_num is smaller
        }
        else
        {
            prev_num = current_num;
        }
    }

    std::cout << num_moves_required << '\n';
    return 0;
}