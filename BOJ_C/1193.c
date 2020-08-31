#include <stdio.h>
int main(){
    int X,big,small,i,a,b;
    scanf("%d",&X);
    for(i=1;X>i*(i*2-1);i++){}
    big=i*(i*2-1);
    small=big-(i*2-1)-(i*2-3);
    if(X-small<big-X){
        a=1;
        b=i*2-2;
        for(;small!=X;small++){
            a++;
            b--;
        }
    }
    else{
        a=1;
        b=i*2-1;
        for(;big!=X;big--){
            a++;
            b--;
        }
    }
    printf("%d/%d",a,b);
    return 0;
}