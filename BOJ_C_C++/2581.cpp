#include <iostream>

bool IsPrimeNum(int num)
{
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int M, N;
    int sum = 0, min = 0;
    std::cin >> M;
    std::cin >> N;
    for (; M <= N; M++)
    {
        if (IsPrimeNum(M))
        {
            sum += M;
            if (min == 0)
            {
                min = M;
            }
        }
    }
    if (min == 0)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << sum << std::endl;
        std::cout << min << std::endl;
    }
}