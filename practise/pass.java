public class pass {
    public static void main(String[] args) {

        int p = 743126;

        for (int i = 0; i <= 999999; i++) {

            if (i == p) {
                System.out.println("Password found : " + i);
                break;
            } else {
                System.out.println("Number checked : " + i);
            }
        }
    }
}