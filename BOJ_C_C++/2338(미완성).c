#include <stdio.h>
#include <string.h>

//배열값을 반대로 다시 배열시키기
char* reverse(char dest[]){
    int bound=strlen(dest)/2;
    int len=strlen(dest);
    int tmp;
    for(int i=0;i<bound;i++){
        tmp=dest[i];
        dest[i]=dest[len-1-i];
        dest[len-1-i]=tmp;
    }
    return dest;
}
//배열에서 -부호 제거하고 정렬
void set_arr_to_sign(char A[]){
    if(A[0]=='-'){
        char tmp;
        int len=strlen(A);
        for(int i=1;i<len;i++){
            A[i-1]=A[i];
        }
        A[len-1]=0;
    }
}
// A,B는 양수일때만 생각,p는 저장배열
char* add(char A[],char B[],char p[]){
    //A,B의 자리수가 같을 때
    if(strlen(A)==strlen(B)){
        int tmp=0;//올림값 저장
        int index=strlen(A)-1;
        char *product=p;
        while(index!=-1){
            tmp=A[index]+B[index]-2*'0'+tmp;//tmp는 숫자(아스키값 아님!!)
            *product=tmp%10+'0';
            tmp=tmp/10;
            index--;
            product++;
        }
        if(tmp!=0){
            *product=tmp%10+'0';
        }
        return p;
    }
    //A,B의 자리수가 다를 때
    else{
        int tmp=0;
        int index_A=strlen(A)-1,index_B=strlen(B)-1;
        char *product=p;
        while(index_A!=-1&&index_B!=-1){
            tmp=A[index_A]+B[index_B]-2*'0'+tmp;//tmp는 숫자(아스키값 아님!!)
            *product=tmp%10+'0';
            tmp=tmp/10;
            index_A--;
            index_B--;
            product++;
        }
        //A배열이 끝난경우
        if(index_A==-1){
            while(index_B!=-1){
                tmp=B[index_B]-'0'+tmp;//tmp는 숫자(아스키값 아님!!)
                *product=tmp%10+'0';
                tmp=tmp/10;
                index_B--;
                product++;
            }
            if(tmp!=0){
                *product=tmp%10+'0';
            }
            return p;
        }
        //B배열이 끝난경우
        else if(index_B==-1){
            while(index_A!=-1){
                tmp=B[index_A]-'0'+tmp;//tmp는 숫자(아스키값 아님!!)
                *product=tmp%10+'0';
                tmp=tmp/10;
                index_A--;
                product++;
            }
            if(tmp!=0){
                *product=tmp%10+'0';
            }
            return p;
        }
    }
    return NULL;//비정상 종료시 NULL 반환
}

//A,B는 양수,A>B A-B계산
char* subtract(char A[],char B[],char p[]){
    //A,B의 자리수가 같을 때
    if(strlen(A)==strlen(B)){
        int tmp;
        int index=strlen(A)-1;
        char* product=p;
        while(index!=-1){
            tmp=(A[index]-'0')-(B[index]-'0')+tmp;
            if(tmp<0){
                *product=10+tmp+'0';
                tmp=-1;
            }
            else{
                *product=tmp+'0';
            }
            index--;
            product++;
        }
        if(tmp==-1){
            
        }
    }
}

int main(){
    char A[1001],B[1001],product[1000000];
    scanf("%s %s",A,B);
    set_arr_to_sign(A);
    printf("%s",A);
}