#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4][4];
    int i,j,sum;

    //입력받기
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 합 계산
    sum=0;

    for(i=0; i<4; i++){
       switch(i){
        case 0:
            sum += arr[i][0];
            break;
        case 1:
            sum += arr[i][0] +arr[i][1];
            break;    
        case 2:
            sum += arr[i][0] +arr[i][1] + arr[i][2];
            break;
        case 3:
            sum += arr[i][0] +arr[i][1] + arr[i][2] + arr[i][3];
            break;
        }
    }

    printf("%d",sum);
    
    return 0;
}