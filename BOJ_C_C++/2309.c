#include <stdio.h>
//구조체 dwarf
struct dwarf{
    int height;
};
// 오름차순
void bubbleU(struct dwarf d[],int length){
    for(int i=0;i<length-1;i++){
        for(int ii=i;ii<length-1;ii++){
            if(d[i].height>d[ii+1].height){
                int tmp=d[ii+1].height;
                d[ii+1].height=d[i].height;
                d[i].height=tmp;
            }
        }
    }
}

int main(){
    int height_temp[2]={0,};
    int sum=0;
    struct dwarf d[9];
    //키 입력
    for(int i=0;i<9;i++){
        scanf("%d",&d[i].height);
    }
    printf("\n");
    //100이 되는 조합
    for(int i=0;i<8;i++){
        // i번 난쟁이 키 0으로
        height_temp[0]=d[i].height;
        d[i].height=0;
        for(int ii=i+1;ii<9;ii++){
            // ii번 난쟁이 키 0으로
            height_temp[1]=d[ii].height;
            d[ii].height=0;
            //키의 합 구하기
            for(int s=0;s<9;s++){
                sum+=d[s].height;
            }
            // sum=100인경우
            if(sum==100){
                bubbleU(d, 9);
                for (int iii = 2; iii < 9; iii++) {
                   printf("%d\n", d[iii].height);
                }
                return 0;
            }
            // 아닌경우
            else{
                d[ii].height=height_temp[1];
                sum=0;
            }
        }
        d[i].height=height_temp[0];
    }
    return 0;
}