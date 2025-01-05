#include <stdio.h>

int main() {
    // Please write your code here.
    
    int n; 

    scanf("%d",&n);

    int arr[n][n];


    for(int i=0; i<n; i++){
        for (int j = 0; j <= i; j++) {  // 오른쪽 끝 값 포함
            if (j == 0 || j == i) {    // 양쪽 끝 값 처리
                arr[i][j] = 1;
            } 
            else {                   // 나머지 값 계산
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }   
    }   

    

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}