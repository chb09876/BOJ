#include <stdio.h>
#include <string.h>
int main(){
    int N,n;
    char word[100][101];
    char *start;
    int cnt=0;
    scanf("%d",&N);
    n=N;
    for(int i=0;i<N;i++){
        scanf("%s",&word[i][0]);
        cnt=0;
        start=NULL;
        for(char c='a';c<='z';c++){
            if(strchr(&word[i][0],c)==NULL){
                continue;
            }
            else{
                for(start=strchr(&word[i][0],c);start<strrchr(&word[i][0],c);start++){
                    if(*start!=c){
                        cnt=1;
                        break;
                    }
                }
            } 
            if(cnt==1){
                n=n-cnt;
                break; 
            }
        }
    }
    printf("%d",n);
}