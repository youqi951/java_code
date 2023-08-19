import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class demo1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int q = scanner.nextInt(); // 输入询问次数
        LinkedList ints = new LinkedList();
        for (int i = 0; i < q; i++) {
            int m = scanner.nextInt(); // 输入每次询问的 m
            int x = scanner.nextInt(); // 输入每次询问的 x
            int answer = (x - 1) % m + 1; // 计算第 x 个订单编号
            ints.add(answer);
//            System.out.println(answer); // 输出答案
        }

//        System.out.println(ints);
        for (int i = 0; i < ints.size(); i++) {
            System.out.println(ints.get(i));
        }

    }
}
