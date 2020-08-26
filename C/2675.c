#include <stdio.h>
int main(){
    int T,R;
    char S[20];
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %s",&R,S);
        for(int s=0;S[s]!='\0';s++){
            for(int r=0;r<R;r++){
                printf("%c",S[s]);
            }
        }
        printf("\n");
    }
}