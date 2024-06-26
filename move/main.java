import java.util.Scanner;

class Main {
    static String letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    public static String move(String s) {
        StringBuffer sb = new StringBuffer(s);

        for(int i = 0; i < s.length(); i++) {
            char c = sb.charAt(i);
            if(letters.contains(Character.toString(c))) {
                sb.setCharAt(i, letters.charAt(letters.indexOf(c) + 1));
            }
        }

        return sb.toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;

        System.out.print("Enter the string: ");
        s = sc.nextLine();

        System.out.println("Moved string: " + move(s));

        sc.close();
    }
}
