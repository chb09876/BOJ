#include <iostream>
#include <algorithm>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int x, y;
    int w, h;
    std::cin >> x >> y >> w >> h;
    std::cout << std::min({x, y, w - x, h - y});
}