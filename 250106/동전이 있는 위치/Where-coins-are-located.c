#include <stdio.h>

int main() {
    // Please write your code here.
    int n, m, i, j;
    scanf("%d %d",&n, &m);

    int loc[m][2];
    int arr[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            arr[i][j] = 0;
    }


    //좌표 입력받기
    for(i=0; i<m; i++){
        scanf("%d %d",&loc[i][0],&loc[i][1]);
    }

    //동전위치에 해당하면 1출력
    for(i=0; i<m; i++){
        arr[(loc[i][0])-1][(loc[i][1])-1] = 1;
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    return 0;
}