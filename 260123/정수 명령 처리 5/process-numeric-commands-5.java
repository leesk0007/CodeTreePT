import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Please write your code here.
        // 배열 만들었고
        ArrayList<Integer> arr = new ArrayList<>();

        // n 번 반복하는 반복문 만들고
        for(int i = 0; i<n; i++){
            String cmd = sc.next();
            // when(다다다)
            switch(cmd){
                case "push_back" :
                    int num = sc.nextInt();
                    arr.add(num);
                    break;
                case "pop_back" : 
                    arr.remove(arr.size()-1);
                    break;
                case "size" : 
                    System.out.println(arr.size());
                    break;
                case "get" : 
                    num = sc.nextInt();
                    System.out.println(arr.get(num-1));
                    break;
            }
        }
    }
}