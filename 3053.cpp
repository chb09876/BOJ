#include <iostream>
#include <cmath>
int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int R;
    std::cin >> R;

    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << R * R * M_PI << '\n';
    std::cout << (double)2.0 * R * R << '\n';
}
