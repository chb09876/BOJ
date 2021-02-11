#include <iostream>

int main()
{
    bool prime_table[1000000] = {
        false,
    }; // 소수 테이블(에라토스테네스의 체) false=소수, true=소수 아님(걸러짐)

    prime_table[0] = true;
    int current_max_prime = 2;

    // 2의배수 거르기
    for (int i = 2; i * 2 <= 123456 * 2; i++)
    {
        prime_table[i * 2 - 1] = true;
    }

    for (int i = 3; i <= 123456 * 2; i++)
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
            for (int k = 2; k * i <= 123456 * 2; k++)
            {
                prime_table[k * i - 1] = true;
            }
        }
        if (current_max_prime * current_max_prime > 123456 * 2)
        {
            break;
        }
    }

    while (true)
    {
        int n;
        int dn = 2 * n;
        int count = 0;
        scanf("%d", &n);
        if (n == 0)
            break;

        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (prime_table[i - 1] == false)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}