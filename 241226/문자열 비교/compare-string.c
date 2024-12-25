#include <stdio.h>
#include <string.h>


int main() {
    // 여기에 코드를 작성해주세요.
    
    //문자열의 개수 n 과 m 입력받음
    int n,m;
    scanf("%d %d",&n, &m);
    
    char S[n][100];
    char M[m][100];
    int i,j;

    //S 안에 들어갈 문자열들
    for(i=0; i<n; i++){
        scanf("%s",S[i]);
    }

    //M (테스트할 문자열들) 입력
    for(i=0; i<m; i++){
            scanf("%s",M[i]);
        }

    //테스트 + 출력
    int count=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if((strcmp(S[i],M[j])==0))
                count++;
        }
    }

    printf("%d",count);
    

    return 0;
}