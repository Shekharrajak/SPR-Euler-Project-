public class Problem_09 {
    public static void main(String [] args){
        for (int n = 1; n < 500; n++) {
            for (int m = (n + 1); m < 500; m ++) {
                int a = (m * m) - (n * n);
                int b = 2 * m * n;
                int c = (m * m) + (n * n);
                if (a + b + c == 1000) {
                    int product = a * b * c;
                    System.out.format("a = %d" + "b = %d" + "c = %d" + newline, a, b, c);
                    System.out.format("Product = %d" + newline, product);
                }
                 
            }   
        }   
    }
    public static String newline = System.getProperty("line.separator");
}