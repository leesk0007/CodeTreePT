#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10],n,i,max=1,min=1000;

    //10개의 정수 입력받고
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);

    // 500 미만인 수 들과 초과인 수 들 구분
    for(i=0; i<10; i++){
    
        if(arr[i]<500){ //500 미만 최대값
            if(max<arr[i])
                max = arr[i];
        }
        else if(arr[i]>500){ //500 초과 최소값
            if(min>arr[i])
                min = arr[i];
        }
    }

    printf("%d %d",max, min);

    return 0;
}