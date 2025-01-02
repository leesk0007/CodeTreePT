#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr1[3][3], arr2[3][3], result[3][3];
    int i,j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr1[i][j]);
        }
    } 


    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    //곱
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            result[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}