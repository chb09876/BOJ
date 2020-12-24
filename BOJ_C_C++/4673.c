#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//10000>d(n)>n
//a>b일때 d(a)>d(b) 는 성립하지 않는다
//ex) a=80, b=76
int Selfnum(int num) {
    int result = num;
    while (num > 0) {
        result = result + num % 10;
        num /= 10;
    }
    return result;
}

int main() {
    int num = 1;
    int temp;
    char isitselfnum[10000] = {0,};
    while (num <= 10000) {
        temp = Selfnum(num);
        if (temp > 10000) {
            num++;
            continue;
        }
        isitselfnum[temp - 1] = 1;
        num++;
    }
    for (int i = 0; i < 10000; i++) {
        if (isitselfnum[i] == 0) {
            printf("%d\n", i + 1);
        }
    }
}