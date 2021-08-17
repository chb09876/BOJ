#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int M, N; // M 이상 N 이하의 소수 출력
    bool prime_table[1000000] = {
        false,
    }; // 소수 테이블(에라토스테네스의 체) false=소수, true=소수 아님(걸러짐)

    prime_table[0] = true;
    int current_max_prime = 2;
    std::cin >> M >> N;

    // 2의배수 거르기
    for (int i = 2; i * 2 <= N; i++)
    {
        prime_table[i * 2 - 1] = true;
    }

    for (int i = 3; i <= N; i++)
    {
        // 걸러진 경우 스킵
        if (prime_table[i - 1] == true)
        {
            continue;
        }
        // 소수인지 판단
        bool isitprime = true;
        for (int j = 2; j < i; j++)
        {
            // 소수가 아닌 경우 탈출
            if (i % j == 0)
            {
                isitprime = false;
                break;
            }
        }
        // 소수인 경우 테이블 거르기
        if (isitprime == true)
        {
            current_max_prime = i;

            // 거르기
            for (int k = 2; k * i <= N; k++)
            {
                prime_table[k * i - 1] = true;
            }
        }
        if (current_max_prime * current_max_prime > N)
        {
            break;
        }
    }

    while (M <= N)
    {
        if (prime_table[M - 1] == false)
        {
            std::cout << M << "\n";
        }
        M++;
    }
}