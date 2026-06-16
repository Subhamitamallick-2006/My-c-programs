public class hack {
    public static void main(String[] args) {

        String p = "Ak47";
        String g = "";
        outer:
        for(int i = 65; i <= 126; i++){
        for (int j = 32; j <= 126; j++) {
            for (int k = 32; k <= 126; k++) {
                for (int l = 32; l <= 126; l++) {       
                    char ch1 = (char) i;
                    char ch2 = (char) j;
                    char ch3 = (char) k;
                    char ch4 = (char) l;
                    g = "" + ch1 + ch2 + ch3 + ch4;
                     System.out.println("Password Checked : " + g);
                    if (g.equals(p)) {
                        System.out.println("Password found : " + g);
                        break outer;
                        }
                    }
                }
            }
        }
    }
}
    

