#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char pe[3];
    int tem[3];
    int pla[4] ={0};
    int i;

    //데이터 입력
    for(i=0; i<3; i++){
        scanf(" %c",&pe[i]);
        scanf("%d",&tem[i]);
    }

    //감기 증상 판단
    for(i=0; i<3; i++){
        if(pe[i]=='Y'&& tem[i]>=37)
            pla[0]++;
        else if(pe[i]=='N' && tem[i]>=37)
            pla[1]++;
        else if(pe[i]=='Y' && tem[i]<37)
            pla[2]++;
        else
            pla[3]++;
    } 

    //합쳐서 진료소 구분
    for(i=0; i<4; i++){
        printf("%d ",pla[i]);
    }
    if(pla[0]>=2)
        printf("E");

    return 0;
}