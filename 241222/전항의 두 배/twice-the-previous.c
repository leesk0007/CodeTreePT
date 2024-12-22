#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int i,j;
    //a1 과 a2를 이용해서 10번째 항까지 구하기..
    //배열 사용.,
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);

    for(i=0; i<10; i++){
        if(i<2){
            printf("%d ",arr[i]);
        }
        else{
            arr[i]=arr[i-1]+2*arr[i-2];
            printf("%d ",arr[i]);
        }  
    }
    return 0;
}