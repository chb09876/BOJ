#include <stdio.h>
/*
A=�������
B=�������
C=�ǸŰ�
N=�ǸŴ��
*/
//���ͺб����� ���� ���
//1. ��������� �ǸŰ� ���� ū ���
//2. �������� �ǸŰ��� ���� ���
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