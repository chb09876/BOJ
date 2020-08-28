#include <stdio.h>

int main(){

    int sangeun[2];
    int sangsoo[2];
    scanf("%d %d",&sangeun[0],&sangeun[1]);
    sangsoo[0]=sangeun[0]%10*100+sangeun[0]%100-sangeun[0]%10+sangeun[0]/100;
    sangsoo[1]=sangeun[1]%10*100+sangeun[1]%100-sangeun[1]%10+sangeun[1]/100;
    if(sangsoo[0]>sangsoo[1]){
        printf("%d",sangsoo[0]);
    }
    else{
        printf("%d",sangsoo[1]);
    }
    return 0;
}
