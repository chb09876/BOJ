#include <stdio.h>

int main(){
    char S[100],ii;
    char stat[21]={0,};
    scanf("%s",S);
    for(char i='a';i<='z';i++){
        for(ii=0;S[ii]!='\0';ii++){
            if(S[ii]==i){
                printf("%d ",ii);
                break;
            }
        }
        if(S[ii]=='\0'){
            printf("%d ",-1);
        }
    }
    return 0;
}