#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int dot_x[4], dot_y[4];

    for (int i = 0; i < 3; i++)
        std::cin >> dot_x[i] >> dot_y[i];

    for (int i = 0; i < 3; i++)
    {
        if (dot_x[i] == dot_x[(1 + i) % 3] && dot_y[i] == dot_y[(2 + i) % 3])
        {
            dot_x[3] = dot_x[(2 + i) % 3];
            dot_y[3] = dot_y[(1 + i) % 3];
            std::cout << dot_x[3] << ' ' << dot_y[3];
            return 0;
        }
        else if (dot_x[i] == dot_x[(2 + i) % 3] && dot_y[i] == dot_y[(1 + i) % 3])
        {
            dot_x[3] = dot_x[(1 + i) % 3];
            dot_y[3] = dot_y[(2 + i) % 3];
            std::cout << dot_x[3] << ' ' << dot_y[3];
            return 0;
        }
    }
}