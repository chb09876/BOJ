#include <stdio.h>
int main(){
    int A[10],B=42,cnt=0;
    for(int i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<10;i++){
        A[i]=A[i]%B;
    }
    for(int i=0;i<10;i++){
        for(int ii=i+1;ii<10;ii++){
            if(A[i]==A[ii]){
                cnt++;
                break;
            }
        }
    }
    printf("%d",10-cnt);
}