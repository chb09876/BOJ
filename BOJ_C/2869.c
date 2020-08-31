#include <stdio.h>
int main(){
    int A,B,V;
    int day,go;
    scanf("%d %d %d",&A,&B,&V);
    go=A-B;
    if(A==V){
        printf("1");
    }
    else if((V-A)%go==0){
        day=(V-A)/go+1;
        printf("%d",day);
    }
    else {
        day=(V-A)/go+2;
        printf("%d",day);
    }
    return 0;
}