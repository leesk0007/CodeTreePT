#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i, index, n, max=0, min=2147483647, arr[1000], result=0;
    // n 입력받고 
    scanf("%d",&n);    
    
    // 배열에 입력받고
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);    
    
    // 가장 쌀 때 사는거야 그리고 그 인덱스 체크
    for(i=0; i<n; i++){ 
        if(min>arr[i]){
            min = arr[i]; //샀음
            index = i;
        }
    }
    //팔아야지
    for(i=index+1; i<n; i++){ 
        if(max<arr[i]){
            max = arr[i]; //샀음
            
        }
    }
    result = (max-min);

    if(result <= 0)
        printf("0");
    else
        printf("%d",result);
    
    return 0;
}