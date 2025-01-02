#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i,j,a=1;

    scanf("%d",&n);

    int arr[n][n];
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++,a++){
            arr[j][i] = a;
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++,a++){
            printf("%d ", arr[i][j]);   
        }
        printf("\n");
    }


    return 0;
}