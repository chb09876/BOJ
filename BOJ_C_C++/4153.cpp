#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    while (true)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        else if (a * a == b * b + c * c)
            std::cout << "right\n";
        else if (b * b == a * a + c * c)
            std::cout << "right\n";
        else if (c * c == a * a + b * b)
            std::cout << "right\n";
        else
            std::cout << "wrong\n";
    }
    return 0;
}