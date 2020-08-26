#include <stdio.h>

int main() {
    int A, B, C ;
    long long int result;
    int cnt[10]={0,};
    char arr[100];
    scanf("%d %d %d", &A, &B, &C);
    result=A*B*C;
    //숫자->문자열(아스키코드)
    sprintf(arr,"%d",result);
    //횟수 세기
    for(int i=0;arr[i]!='\0';i++){
        for(int ii=0;ii<10;ii++){
            if(arr[i]==ii+'0'){
                cnt[ii]++;
            }
        }
    }
    //출력
    for(int i=0;i<10;i++){
        printf("%d\n",cnt[i]);
    }

    return 0;
}