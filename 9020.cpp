#include <iostream>

int main()
{
    // 2~10000 까지의 소수 테이블 생성
    bool isnotprime[10000] = {
        0,
    };                     // prime > false, not prime > true
    isnotprime[1] = false; // 2=prime
    int currentprime = 2;
    for (int i = 2; i <= 10000; i++)
    {
        // 소수판별
        int j;
        if (isnotprime[i - 1] == true)
            continue;
        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    break;
            }
        }
        // 소수일때
        if (j == i)
        {
            currentprime = i;
            isnotprime[i - 1] = false;
            for (int k = 2; i * k <= 10000; k++)
                isnotprime[i * k - 1] = true;
        }
        if (currentprime * currentprime >= 10000)
            break;
    }

    int T; // 테스트 케이스 개수 T
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int n; // 짝수 n
        int a, b;
        scanf("%d", &n);
        for (int j = n / 2; j >= 2; j--)
        {
            if (isnotprime[j - 1] == false && isnotprime[n - j - 1] == false)
            {
                printf("%d %d\n", j, n - j);
                break;
            }
        }
    }

    return 0;
}