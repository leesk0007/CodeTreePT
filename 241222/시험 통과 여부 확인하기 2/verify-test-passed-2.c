#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    typedef struct {
        int sub[4];
        double avg;
    }Students;

    int i,j,n,sum,count=0;
    Students k[100];

    //학생 수 입력받고
    scanf("%d",&n);

    //점수 입력받고
    for(i=0; i<n; i++){
        for(j=0; j<4; j++){
            scanf("%d",&k[i].sub[j]);
        }
    }

    //4개의 평균이 60 이상이면 통과
      for(i=0; i<n; i++){
        sum=0;
        for(j=0; j<4; j++){
        sum+=k[i].sub[j];
        }
        k[i].avg = sum/4.0;
        if(k[i].avg>60){
            printf("pass\n");
            count++;
        }
        else
            printf("fail\n");

    }    

    //통과한 사람 수 세기
    printf("%d",count);
    
    return 0;
}