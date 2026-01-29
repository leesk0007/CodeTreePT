import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        insert_sort(arr);
        
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+" ");
        }

        
    }
    public static void insert_sort(int[] arr){
        int len = arr.length;
        int key;
        for(int i = 1; i < len; i++){
            key = arr[i];
            for(int j = i - 1; j >= 0; j--){
                if(key < arr[j]){
                    arr[j+1] = arr[j];
                    arr[j] = key;
                }
            }
        }
    }
}