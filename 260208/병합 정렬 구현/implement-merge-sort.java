import java.util.Scanner;

public class Main {

    public static int[] re_arr;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        re_arr = new int[n];
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
        // 1번 배열이 비어있지않다면
        if(i < mid + 1){
            for(int f = i; f <= mid; f++)
                re_arr[k++] = arr[i];
                i++;
        }
        // 2번 배열이 비어있지않다면
        else if(j < high + 1){
            for(int f = j; f <= high; f++)
                re_arr[k++] = arr[j];
                j++;
        }
        
        for(int index = low; index <= high; index++) {
            arr[index] = re_arr[index];
        }        
    }
}
