#include <stdio.h>
/*
A=고정비용
B=가변비용
C=판매가
N=판매대수
*/
//손익분기점이 없는 경우
//1. 가변비용이 판매가 보다 큰 경우
//2. 가변비용과 판매가가 같은 경우
int main(){
    int A,B,C,N=0;
    int earn;
    scanf("%d %d %d",&A,&B,&C);
    earn=C-B;
    if(earn<=0){
        printf("%d",-1);
        return 0;
    }
    N=A/earn;
    printf("%d",N+1);
    return 0;
}