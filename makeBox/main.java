import java.util.Scanner;

class Main {
    public static String makeBox(int n) {
        StringBuffer sb = new StringBuffer(n * (n + 1));
        char c;

        for(int j = 0; j < n; j++) {
            for(int i = 0; i <= n; i++) {
                if(i == n) {
                    c = '\n';
                } else {
                    if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                        c = '#';
                    } else {
                        c = ' ';
                    }
                }
                sb.append(c);
            }
        }

        return sb.toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        System.out.print("Enter the dimension: ");
        n = sc.nextInt();
        sc.close();

        System.out.println(makeBox(n));
    }
}