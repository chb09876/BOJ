#include <stdio.h>
#include <string.h>
int main(){
    int N,sum,score[80];
    char arr[80];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        sum=0;
        memset(score,0,sizeof(score));
        scanf("%s",arr);
        if(arr[0]=='O'){
            score[0]=1;
            sum+=score[0];
        }
        for(int ii=1;ii<strlen(arr);ii++){
            if(arr[ii]=='O'){
                score[ii]=score[ii-1]+1;
                sum+=score[ii];
            }
        }
        printf("%d\n",sum);
    }
}