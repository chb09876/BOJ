#include <stdio.h>

int main(){
    int T,k,n,cnt=0;
    int room[15][14]={{1,2,3,4,5,6,7,8,9,10,11,12,13,14}};
    for(int i=1;i<15;i++){
        for(int ii=0;ii<14;ii++){
            if(ii==0){
                room[i][ii]=1;
            }
            else{
                room[i][ii]=room[i][ii-1]+room[i-1][ii];
            }
        }
    }
    scanf("%d",&T);
    for(;T!=0;T--){
        scanf("%d",&k);
        scanf("%d",&n);
        printf("%d\n",room[k][n-1]);
    }
}

