import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        // Please write your code here.

        merge(arr, 0, n-1);

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void merge(int arr[], int low, int high){
        if(low < high){
            int mid = (low + high) / 2;
            merge(arr, low, mid);
            merge(arr, mid + 1, high);
            merge_sort(arr, low, mid, high);
        }
    }

    public static void merge_sort(int arr[], int low, int mid, int high){
        int i = low;
        int j = mid + 1;

        int k = low;
        
        int[] re_arr = new int[arr.length]; 

        // 두 배열이 모두 비어있지 않다면
        while(i <= mid && j <= high){
            if(arr[i] < arr[j]){
                re_arr[k] = arr[i];
                i++;
                k++;
            }
            else {
                re_arr[k] = arr[j];
                j++;
                k++;
            }
        }
        // 2. 왼쪽에 남은 거 털어 넣기 (while 사용)
        while(i <= mid){
            re_arr[k++] = arr[i++];
        }

        // 3. 오른쪽에 남은 거 털어 넣기 (while 사용)
        while(j <= high){
            re_arr[k++] = arr[j++];
        }
        
        for(int index = low; index <= high; index++) {
            arr[index] = re_arr[index];
        }
    }
}
