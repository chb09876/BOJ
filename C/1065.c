#include <stdio.h>
//�ڸ��� ��ȯ �Լ�
int digit(int dest){
    int i=0;
    while(dest>0){
        dest/=10;
        i++;
    }
    return i;
}
//�Ѽ�
int Hansoo(int num){
    int cnt;
    // ���ڸ��� �̸��� ���� ����
    if(num<100){
        cnt=num;
        return cnt;
    }
    // ���ڸ��� �̻��� ���� ����
    else if(num>=100){
        int n,d[4],diff,check,cnt=99,temp;
        for(n=100;n<=num;n++){
            for(int i=0,temp=n;i<digit(n);i++){
                d[i]=temp%10;
                temp/=10;
            }
            diff=(d[0]-d[1]);
            for(check=1;check<digit(n)-1;check++){
                if((d[check]-d[check+1])==diff){
                    continue;
                }else{
                    break;
                }
            }
            if(check==digit(n)-1){
                cnt++;
            }
        }
        return cnt;
    }
    return -1;
}
//���� �Լ�
int main(){
    int N;
    scanf("%d",&N);
    printf("%d",Hansoo(N));
    return 0;
}