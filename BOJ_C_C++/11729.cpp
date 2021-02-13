#include <iostream>
#include <cmath>
void Hanoi(int k, int from, int to, int temp);

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    std::cout << (int)pow(2, N) - 1 << '\n';
    Hanoi(N, 1, 3, 2);
}

void Hanoi(int k, int from, int to, int temp)
{
    if (k == 0)
        return;
    else if (k == 1)
        std::cout << from << ' ' << to << '\n';
    else
    {
        Hanoi(k - 1, from, temp, to);
        std::cout << from << ' ' << to << '\n';
        Hanoi(k - 1, temp, to, from);
    }
}