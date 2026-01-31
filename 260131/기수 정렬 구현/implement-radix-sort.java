import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        // 1. 최댓값 구하기 (자릿수 계산용)
        int max = getMax(arr);
        
        // 2. 자릿수 k 구하기
        int k = 0; // 초기화 필수!
        int exp = 1;
        while((max / exp) > 0){
            k++;
            exp *= 10; // [수정] 대입 연산자(*=) 사용
        }

        // 3. 기수 정렬 실행 (arr와 자릿수 k 전달)
        radixSort(arr, k);

        // 출력
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }

    // 최댓값 구하는 함수 (추가함)
    public static int getMax(int[] arr) {
        int max = arr[0];
        for(int num : arr) {
            if(num > max) max = num;
        }
        return max;
    }

    public static void radixSort(int[] arr, int k){
        int n = arr.length;
        int exp = 1; // 1의 자리부터 시작

        // 자릿수(k) 만큼 반복 (예: 100의 자리면 3번 반복)
        for(int d = 0; d < k; d++){
            
            int[] output = new int[n]; // 임시 저장소
            int[] count = new int[10]; 

            for(int i = 0; i < n; i++) {
                int digit = (arr[i] / exp) % 10;
                count[digit]++; 
            }

            for(int i = 1; i < 10; i++) {
                count[i] += count[i-1];
            }

        
            for(int i = n - 1; i >= 0; i--) {
                int digit = (arr[i] / exp) % 10;
                output[count[digit] - 1] = arr[i];
                count[digit]--;
            }

            for(int i = 0; i < n; i++) {
                arr[i] = output[i];
            }

            exp *= 10;
        }
    }
}