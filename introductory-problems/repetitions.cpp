// https://cses.fi/problemset/task/1069

#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string input_str;
    std::cin >> input_str;

    if (input_str.empty())
    {
        std::cout << "0\n";
        return 0;
    }

    std::int64_t maximum_length = 1, current_length = 1;

    for (std::size_t i; i < input_str.size(); ++i)
    {
        if (input_str[i] == input_str[i - 1])
        {
            ++current_length;
            if (current_length > maximum_length)
                maximum_length = current_length;
        }
        else
        {
            current_length = 1;
        }
    }

    std::cout << maximum_length << '\n';

    return 0;
}
