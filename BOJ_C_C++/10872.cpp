#include <iostream>

int factori(int n);

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int N;
    std::cin >> N;
    std::cout << factori(N);
}

int factori(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factori(n - 1);
}