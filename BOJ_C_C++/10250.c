#include <stdio.h>
int main(){
    char room[100][100];
    int T,H,W,N;
    scanf("%d",&T);
    for(;T!=0;T--){
        scanf("%d %d %d",&H,&W,&N);
        printf("%d%02d\n",(N-1)%H+1,(N-1)/H+1);
    }
}