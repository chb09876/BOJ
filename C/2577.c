#include <stdio.h>

int main() {
    int A, B, C ;
    long long int result;
    int cnt[10]={0,};
    char arr[100];
    scanf("%d %d %d", &A, &B, &C);
    result=A*B*C;
    //����->���ڿ�(�ƽ�Ű�ڵ�)
    sprintf(arr,"%d",result);
    //Ƚ�� ����
    for(int i=0;arr[i]!='\0';i++){
        for(int ii=0;ii<10;ii++){
            if(arr[i]==ii+'0'){
                cnt[ii]++;
            }
        }
    }
    //���
    for(int i=0;i<10;i++){
        printf("%d\n",cnt[i]);
    }

    return 0;
}