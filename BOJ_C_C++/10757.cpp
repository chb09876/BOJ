#include <iostream>

int main()
{
    char A[10010] = {
        0,
    };
    char B[10010] = {
        0,
    };
    char result[10010] = {
        0,
    };
    int A_len = 0, B_len = 0;

    // A, B 입력
    std::cin >> A;
    std::cin >> B;

    // A, B 길이 구하기
    while (A[A_len])
    {
        A_len++;
    }
    while (B[B_len])
    {
        B_len++;
    }

    // 덧셈
    int i = 0;
    int temp = 0;
    int sum = 0;
    while (i != A_len && i != B_len)
    {
        sum = A[A_len - 1 - i] - '0' + B[B_len - 1 - i] - '0' + temp;
        temp = sum / 10;
        sum %= 10;
        result[10008 - i] = sum + '0';
        i++;
    }
    if (A_len == B_len)
    {
        if (temp > 0)
        {
            sum = temp;
            result[10008 - i] = sum + '0';
            i++;
        }
    }
    else if (i == A_len)
    {
        while (i < B_len)
        {
            sum = B[B_len - 1 - i] - '0' + temp;
            temp = sum / 10;
            sum %= 10;
            result[10008 - i] = sum + '0';
            i++;
        }
        if (temp > 0)
        {
            result[10008 - i] = temp + '0';
            i++;
        }
    }
    else if (i == B_len)
    {
        while (i < A_len)
        {
            sum = A[A_len - 1 - i] - '0' + temp;
            temp = sum / 10;
            sum %= 10;
            result[10008 - i] = sum + '0';
            i++;
        }
        if (temp > 0)
        {
            result[10008 - i] = temp + '0';
            i++;
        }
    }

    char *dest = &result[10009 - i];
    std::cout << dest;
    
    return 0;
}