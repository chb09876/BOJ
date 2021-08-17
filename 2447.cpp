#include <iostream>
#include <cmath>

char paper[10000][10000];
void MakePattern(int size, int level);

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    // fill star in paper
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            paper[i][j] = '*';

    MakePattern(N, 0);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            std::cout << paper[i][j];
        std::cout << '\n';
    }
}

void MakePattern(int size, int level) // field_size : 절대크기, level : 0부터 시작
{
    int blank_size = size / pow(3, level + 1);
    if (blank_size < 1)
        return;
    else
    {

        for (int i = 0; i < pow(3, level); i++) // 공백 사각형의 행
        {
            for (int j = 0; j < pow(3, level); j++) // 공백 사각형의 열
            {
                for (int m = 0; m < blank_size; m++)
                {
                    for (int n = 0; n < blank_size; n++)
                    {
                        paper[(size / (int)pow(3, level + 1)) * (i * 3 + 1) + m][(size / (int)pow(3, level + 1)) * (j * 3 + 1) + n] = ' ';
                    }
                }
            }
        }

        return MakePattern(size, level + 1);
    }
}