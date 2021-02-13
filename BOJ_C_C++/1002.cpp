#include <iostream>
#include <cmath>
#include <algorithm>
int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        int x[2], y[2], r[2];
        std::cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
        double distance = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));

        // -1일때
        if (r[0] == r[1] && distance == 0)
            std::cout << "-1\n";
        // 0일때
        else if (std::max(r[0], r[1]) > std::min(r[0], r[1]) + distance)
            std::cout << "0\n";
        else if (distance > r[0] + r[1])
            std::cout << "0\n";
        // 1일때
        else if (std::max(r[0], r[1]) == std::min(r[0], r[1]) + distance)
            std::cout << "1\n";
        else if (distance == r[0] + r[1])
            std::cout << "1\n";
        // 2일때
        else
            std::cout << "2\n";
    }
}