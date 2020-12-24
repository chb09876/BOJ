#include <stdio.h>
int main(){
    int N,level,cnt=1,previous_term,current_term;
    scanf("%d",&N);
    if(N==1){
        printf("1");
        return 0;
    }
    for(level=2;!(N>1+((level-2)*(level-1)/2)*6&&N<=1+((level-1)*level/2)*6);level++){}
    
    printf("%d",level);
}