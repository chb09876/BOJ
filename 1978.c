#include <stdio.h>
int main(){
    int N,number,cnt=0,i;
    scanf("%d",&N);
    for(;N!=0;N--){
        scanf("%d",&number);
        if(number==1)
            continue;
        for(i=2;number%i!=0;i++){}
        if(i==number){
            cnt++;
        }
    }
    printf("%d",cnt);
}