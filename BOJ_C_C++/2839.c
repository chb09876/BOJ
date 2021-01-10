#include <stdio.h>
int main(){
    int five,three=0;
    int weight;
    scanf("%d",&weight);
    for(five=weight/5;five!=0;five--){
        if((weight-(five*5))%3!=0)
            continue;
        else{
            three=(weight-(five*5))/3;
            printf("%d",five+three);
            return 0;
        }
    }
    if(weight%3==0){
        printf("%d",weight/3);
        return 0;
    }
    printf("-1");
    return 0;
}