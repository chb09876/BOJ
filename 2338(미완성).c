#include <stdio.h>
#include <string.h>

//�迭���� �ݴ�� �ٽ� �迭��Ű��
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
//�迭���� -��ȣ �����ϰ� ����
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
// A,B�� ����϶��� ����,p�� ����迭
char* add(char A[],char B[],char p[]){
    //A,B�� �ڸ����� ���� ��
    if(strlen(A)==strlen(B)){
        int tmp=0;//�ø��� ����
        int index=strlen(A)-1;
        char *product=p;
        while(index!=-1){
            tmp=A[index]+B[index]-2*'0'+tmp;//tmp�� ����(�ƽ�Ű�� �ƴ�!!)
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
    //A,B�� �ڸ����� �ٸ� ��
    else{
        int tmp=0;
        int index_A=strlen(A)-1,index_B=strlen(B)-1;
        char *product=p;
        while(index_A!=-1&&index_B!=-1){
            tmp=A[index_A]+B[index_B]-2*'0'+tmp;//tmp�� ����(�ƽ�Ű�� �ƴ�!!)
            *product=tmp%10+'0';
            tmp=tmp/10;
            index_A--;
            index_B--;
            product++;
        }
        //A�迭�� �������
        if(index_A==-1){
            while(index_B!=-1){
                tmp=B[index_B]-'0'+tmp;//tmp�� ����(�ƽ�Ű�� �ƴ�!!)
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
        //B�迭�� �������
        else if(index_B==-1){
            while(index_A!=-1){
                tmp=B[index_A]-'0'+tmp;//tmp�� ����(�ƽ�Ű�� �ƴ�!!)
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
    return NULL;//������ ����� NULL ��ȯ
}

//A,B�� ���,A>B A-B���
char* subtract(char A[],char B[],char p[]){
    //A,B�� �ڸ����� ���� ��
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