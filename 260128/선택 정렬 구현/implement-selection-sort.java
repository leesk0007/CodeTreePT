import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        selection_sort(arr);
        
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+" ");
        }
        // Please write your code here.
    }
    public static void selection_sort(int[] arr){
        
        int len = arr.length;
        int minIdx;

        for(int i = 0; i < len-1; i++){
            minIdx = i; // 맨 앞 인덱스를 가장 작은 수라고 가정
            for(int j = i + 1; j < len; j++){ // 남은 배열중 최솟값 탐색
                if(arr[minIdx] > arr[j]){
                    int tmp = arr[j];
                    arr[j] = arr[minIdx];
                    arr[minIdx] = tmp;
                }
            }
        }
    }
    
}