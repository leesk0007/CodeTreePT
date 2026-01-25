import java.util.Scanner;
import java.util.LinkedList;
import java.util.ListIterator;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // 처음 식빵의 개수
        int n = sc.nextInt(); 
        // 암호문의 개수
        int m = sc.nextInt();
        // 버퍼 비우기
        sc.nextLine();
        // 문자열 받기 ex) codet
        String s = sc.next();

        // 연결리스트 생성
        LinkedList<Character> l = new LinkedList<>();
        
        // 연결리스트에 넣어야지
        for(char c : s.toCharArray()){
            l.add(c);
        }
        // 이터레이터 생성 (위치는 맨 뒤)
        ListIterator<Character> it = l.listIterator(l.size());

        //명령어 커맨드 입력
        for (int i = 0; i < m; i++) {
            char command = sc.next().charAt(0); // m번 반복
            if(command == 'L' && it.hasPrevious()){
                it.previous();
            } else if(command == 'R' && it.hasNext()){
                it.next();
            } else if(command == 'D' && it.hasNext()){
                it.next();
                it.remove();
            } else if(command == 'P'){
                char p = sc.next().charAt(0);
                it.add(p);
            }
        }
        // 이터레이터 맨 앞으로 이동
        it = l.listIterator();
        while(it.hasNext()){ // 하나씩 출력
            System.out.print(it.next());
        }
        
        // Please write your code here.
    }
}