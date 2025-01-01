#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[2][4];
    int i,j,sum;

    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<2; i++){
        sum=0;
        for(j=0; j<4; j++){
            sum += arr[i][j];
        }
        printf("%.1lf ",sum/4.0);
    }
    printf("\n");
   
    for(i=0; i<4; i++){
        sum=0;
        for(j=0; j<2; j++){
            sum += arr[j][i];
        }
        printf("%.1lf ",sum/2.0);
    }
    printf("\n");

    sum=0;
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            sum += arr[j][i];
        }
    }
    printf("%.1lf",sum/8.0);


    return 0;
}