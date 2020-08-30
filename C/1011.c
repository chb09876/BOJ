#include <stdio.h>
#include <math.h>
int main(){
    int T,distance,k,x,y,i;
    scanf("%d",&T);
    for(;T!=0;T--){
        scanf("%d %d",&x,&y);
        distance=y-x;
        i=sqrt(distance-1)+1;
        if(i*i-distance<distance-(i-1)*(i-1)){
            printf("%d\n",2*i-1);
        }
        else {
            printf("%d\n",i*2-2);
        }
    }
}