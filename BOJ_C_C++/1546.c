#include <stdio.h>

int bubbleD(int arr[],int length){
    for(int i=0;i<length-1;i++){
        for(int ii=i;ii<length-1;ii++){
            if(arr[i]<arr[ii+1]){
                int tmp=arr[ii+1];
                arr[ii+1]=arr[i];
                arr[i]=tmp;
            }
        }
    }
}

int main(){
    int N,score[1000],max,sum=0;
    double new_average;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    }
    bubbleD(score,N);
    max=score[0];
    new_average=(double)sum/max*100;
    printf("%f",new_average/N);
}