#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // n 입력받기
    int i, n, count=0;
    int arr[100],index;
    
    scanf("%d",&n);

    // n개의 수 입력받기
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // 2가 3번째로 등장하는 인덱스탐색, + 1 출력
    for(i=0; i<n; i++){
        if(arr[i]==2)
            count++;

        if(count==3){
            printf("%d",i+1);
            break;
        }    
    }
   
    return 0;
}