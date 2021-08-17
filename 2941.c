#include <stdio.h>
#include <string.h>
//c=,c-,dz=,d-,lj,nj,s=,z=

int main(){
    int cnt=0;
    char word[100];
    scanf("%s",word);
    for(int i=0;i<strlen(word);i++){
        if(word[i]=='c'&&word[i+1]=='='){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='c'&&word[i+1]=='-'){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='d'&&word[i+1]=='-'){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='l'&&word[i+1]=='j'){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='n'&&word[i+1]=='j'){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='s'&&word[i+1]=='='){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='z'&&word[i+1]=='='){
            word[i]=1;
            word[i+1]=1;
            cnt++;
        }
        else if(word[i]=='d'&&word[i+1]=='z'&&word[i+2]=='='){
            word[i]=1;
            word[i+1]=1;
            word[i+2]=1;
            cnt++;
        }
    }
    for(int i=0;i<strlen(word);i++){
        if(word[i]>='a'&&word[i]<='z'){
            cnt++;
        }
    }
    printf("%d",cnt);
}