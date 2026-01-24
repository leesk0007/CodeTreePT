import java.util.Scanner;
import java.util.LinkedList;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            String command = sc.next();
            // Please write your code here.
            switch(command){
                case "push_front" : // 맨 앞 삽입
                    int num = sc.nextInt();
                    list.addFirst(num);
                    break;

                case "push_back" : // 맨 뒤 삽입
                    num = sc.nextInt();
                    list.addLast(num);
                    break;

                case "pop_front" : // 연결리스트 가장 앞에 있는 수뺴고 그 수 출력 
                    System.out.println(list.pollFirst());
                    break;

                case "pop_back" : // 연결리스트 가장 뒤에 있는 수뺴고 그 수 출력
                    System.out.println(list.pollLast());
                    break;

                case "size" : // 리스트 안의 개수 출력
                    System.out.println(list.size());
                    break;

                case "empty" : // 비어있는지 확인 1 or 0
                    System.out.println(list.isEmpty()? 1 : 0);
                    break;

                case "front" : // 가장 앞에 있는 정수 출력
                    System.out.println(list.peekFirst());
                    break;

                case "back" : // 가장 뒤에 있는 정수 출력
                    System.out.println(list.peekLast());
                    break;

            }
        }
    }
}