#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<2*N;i++){
        if(i%2==0){
            for(int ii=0;ii<N;ii++){
                if(ii%2==0){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }else {
            for(int ii=0;ii<N;ii++){
                if(ii%2==1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}