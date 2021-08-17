#include <stdio.h>
#include <string.h>
int main(){
    int C;
    int N,cnt=0;
    int score[1000],sum=0;
    double average;
    scanf("%d",&C);
    for(int i=0;i<C;i++){
        cnt=0;
        sum=0;
        memset(score,0,sizeof(score));
        scanf("%d",&N);
        for(int ii=0;ii<N;ii++){
            scanf("%d",&score[ii]);
            sum+=score[ii];
        }
        average=(double)sum/N;
        for(int ii=0;ii<N;ii++){
            if(score[ii]>average){
                cnt++;
            }
        }
        printf("%.3f%%\n",(double)cnt/N*100);
    }
    return 0;
}