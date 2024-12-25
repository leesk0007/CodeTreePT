#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    //n1 n2 입력받음
    int i,j, n1, n2;
    scanf("%d %d",&n1, &n2);

    int A[n1], B[n2];

    //A 배열에 원소 입력
    for(i=0; i<n1; i++){
        scanf("%d",&A[i]);
    }

    //B 배열에 원소 입력
    for(i=0; i<n2; i++){
        scanf("%d",&B[i]);
    }

    //연속부분수열인지 판단

    //A 하나씩 증가시키면서 B랑 같은게 있는지 탐색
    for(i=0,j=0; i<n1; i++){
    //있으면 A랑 B둘다 증가
        if(A[i]==B[j]){
            j++;
            //증가시킨 j가 마지막 항이면 Yes
            if(j==n2){
                printf("Yes");
                break;
            }
            //달라지는 순간 No
            else if(A[i+1]!=B[j]){
                printf("No");
                break;
            }
        }   
    }
    return 0;
}