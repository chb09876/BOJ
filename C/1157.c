#include <stdio.h>

int main(){
    char word[1000005];
    int cnt[30]={0,};
    int max=0,max_i;
    int check=0;
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        if(word[i]>='a'&&word[i]<='z'){
            word[i]-=32;
        }
        cnt[word[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(cnt[i]>max){
            max=cnt[i];
            max_i=i;
            check=0;
        }else if(cnt[i]==max){
            check=1;
        }
    }
    if(check==1){
        printf("?");
    }else{
        printf("%c",'A'+max_i);
    }
    return 0;
}