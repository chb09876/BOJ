#include <stdio.h>
int main(){
    int N,m=3;
    int i,ii;
    scanf("%d",&N);
    for(i=0;i<2*N-1;i++){
        if(i<N){
            for(ii=0;ii<i;ii++){
                printf(" ");
            }
            for(ii=0;ii<2*N-1-2*i;ii++){
                printf("*");
            }
            printf("\n");
        }else {
            for(ii=1;ii<2*N-1-i;ii++){
                printf(" ");
            }
            for(ii=0;ii<m;ii++){
                printf("*");
            }
            m+=2;
            printf("\n");
        }
    }
}