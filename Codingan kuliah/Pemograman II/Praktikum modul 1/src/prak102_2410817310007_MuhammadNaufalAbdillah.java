import java.util.Scanner;
public class prak102_2410817310007_MuhammadNaufalAbdillah {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print(" ");
            int Number = scan.nextInt();

        int count = 0;

            while (count < 11){
                if (count>0) {
                System.out.print(", ");
            }

            if (Number % 5 == 0) {
                System.out.print(Number / 5 - 1);
            } else {
                System.out.print(Number);
            }

            Number++;
            count++;
        }
            System.out.println();
            scan.close();
    }
}