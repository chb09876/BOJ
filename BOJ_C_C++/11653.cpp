#include <iostream>

int main()
{
    int N; // 입력받는 정수 N
    std::cin >> N;
    if (N == 1) // N이 1인 경우 아무것도 출력하지 않는다.
        return 0;

    int num = 2;
    while (num < 2 * N)
    {
        if (N % num == 0)
        {
            std::cout << num << std::endl;
            N /= num;
        }
        else
        {
            num++;
        }
    }
}