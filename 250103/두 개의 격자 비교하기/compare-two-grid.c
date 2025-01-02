#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int i,j,n,m;

    scanf("%d %d",&n, &m);
    int arr1[n][m], arr2[n][m], result[n][m];
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(arr1[i][j]==arr2[i][j]){
                result[i][j] = 0;
            }
            else
                result[i][j] = 1;
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}