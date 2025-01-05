#include <stdio.h>

int main() {
    // Please write your code here.
    int i,j,n =5; 
    int arr[n][n];
    int col, row;
    
    
    for(i=0; i<n; i++){
        arr[0][i] = 1;
    }
    for(i=0; i<n; i++){
        arr[i][0] = 1;
    }

    row = 1; col = 1;
    while(1){

        if(row==5)
            break;
        //2열부터 시작
        //위에랑 왼쪽이랑 더하기
        arr[row][col] = (arr[row-1][col]+ arr[row][col-1]);
        col++;

        //마지막 열이면 다음 행으로 넘기기
        if(col == 5){
            row++;
            col = 1;
        }

    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}