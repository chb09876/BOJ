#include <stdio.h>
//����ü dwarf
struct dwarf{
    int height;
};
// ��������
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
    //Ű �Է�
    for(int i=0;i<9;i++){
        scanf("%d",&d[i].height);
    }
    printf("\n");
    //100�� �Ǵ� ����
    for(int i=0;i<8;i++){
        // i�� ������ Ű 0����
        height_temp[0]=d[i].height;
        d[i].height=0;
        for(int ii=i+1;ii<9;ii++){
            // ii�� ������ Ű 0����
            height_temp[1]=d[ii].height;
            d[ii].height=0;
            //Ű�� �� ���ϱ�
            for(int s=0;s<9;s++){
                sum+=d[s].height;
            }
            // sum=100�ΰ��
            if(sum==100){
                bubbleU(d, 9);
                for (int iii = 2; iii < 9; iii++) {
                   printf("%d\n", d[iii].height);
                }
                return 0;
            }
            // �ƴѰ��
            else{
                d[ii].height=height_temp[1];
                sum=0;
            }
        }
        d[i].height=height_temp[0];
    }
    return 0;
}