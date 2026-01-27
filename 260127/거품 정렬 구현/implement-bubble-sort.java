import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        bubble_sort(arr);

        for(int i = 0; i < n; i++)
            System.out.print(arr[i]+ " ");
        // Please write your code here.
    }
    public static void bubble_sort(int[] arr){
        int len = arr.length;
        boolean sorted = true;
        int tmp;

        do{
            sorted = true;
            for(int i = 0; i < len - 1; i++ ){
                if(arr[i] > arr[i+1]){
                    tmp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tmp;
                    sorted = false;
                } 
            }
        } while(sorted != true); 
    }
}