#include <iostream>

int Fibonacci(int n);

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::cout << Fibonacci(n);

    return 0;
}

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}