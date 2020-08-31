#include <stdio.h>
#include <string.h>

int main(){
    char string[1000001];
    int cnt=0;
    fgets(string,1000001,stdin);
    for(int i=0;i!=strlen(string)-1;i++){
        if(string[i]==' '){
            cnt++;
        }
    }
    if(cnt==0){
        printf("%d",1);
        return 0;
    }
    if(string[0]!=' '){
        cnt ++;
    }
    if(string[strlen(string)-2]==' '){
        cnt--;
    }
    printf("%d",cnt);
    return 0;
}