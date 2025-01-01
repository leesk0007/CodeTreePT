#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i,j,sub;
    scanf("%d",&n);

    int arr[10];

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    sub=arr[1]-arr[0];

    for(i=1; i<n-1; i++){ 
        if(sub>(arr[i+1]-arr[i])){
            sub=arr[i+1]-arr[i];
        }    
    }

    printf("%d",(sub));    

    return 0;
}