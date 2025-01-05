#include <stdio.h>

int main() {
    // Please write your code here.

    int n,i,j,a=0;

    scanf("%d",&n);

    int arr[n][n];

    for(i=n-1; i>=0; i--){
        if(n%2==0){
            if(i%2==1){ //짝수열 
                for(j=n-1; j>=0; j--){
                    arr[j][i] = ++a;
                }
            }
            else{ // 홀수열
                for(j=0; j<n; j++){
                    arr[j][i] = ++a;
                }
            }
        }
        else{
            if(i%2==0){ //홀수열 
                for(j=n-1; j>=0; j--){
                    arr[j][i] = ++a;
                }
            }
            else{ // 짝수열
                for(j=0; j<n; j++){
                    arr[j][i] = ++a;
                }
            }
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