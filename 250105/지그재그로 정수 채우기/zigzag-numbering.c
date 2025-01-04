#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    int i,j,a=0;

    scanf("%d %d",&n,&m);

    int arr[n][m];
    // 일단 반복해서 값 넣어주고
    // 홀수 열이면 오름차순
    // 짝수 열이면 내림차순


    for(i=0; i<m; i++){
        if(i%2==0) { //홀수열        
            for(j=0; j<n; j++){
                arr[j][i] = a++; 
            }
        }
        else {
            for(j=n-1; j>=0; j--){
                    arr[j][i] = a++; 
            }
        }
    }
    

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",arr[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}