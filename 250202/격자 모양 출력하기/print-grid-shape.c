#include <stdio.h>

int main() {
    // Please write your code here.

    typedef struct{
        int x;
        int y;
    }Point;

    int n, m;
    scanf("%d %d",&n, &m); //n과 m 입력

    int arr[n][n];
    Point p[m];


    for(int i=0; i<m; i++)
        scanf("%d %d",&p[i].x,&p[i].y);

    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+1)==p[k].x&&(j+1)==p[k].y){
                arr[i][j]=(i+1)*(j+1); 
                k++;
            }
            else
                arr[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}