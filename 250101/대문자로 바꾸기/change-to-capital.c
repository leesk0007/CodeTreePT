#include <stdio.h>
#include <ctype.h>

int main() {
 
    // 여기에 코드를 작성해주세요.
    char arr[5][3];
    int i,j;

    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            scanf(" %c",&arr[i][j]);
        }
    }
 
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            printf("%c ",toupper(arr[i][j]));
        }
        printf("\n");
    }

    return 0;
}