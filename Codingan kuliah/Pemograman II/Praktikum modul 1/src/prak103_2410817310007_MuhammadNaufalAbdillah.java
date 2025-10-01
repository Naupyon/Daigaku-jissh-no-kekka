import java.util.Scanner;
public class prak103_2410817310007_MuhammadNaufalAbdillah {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print(" ");
        int N = scan.nextInt();

        System.out.print(" ");
        int Start = scan.nextInt();

        int  Count = 0;

       if (N > 0){
           do {
               if (Start % 2 != 0) {
                   if (Count > 0){
                       System.out.print(", ");
                   }
                   System.out.print(Start);
                   Count++;
               }
               Start++;
           } while (Count < N);
       }else {
            System.out.println();
       }
       System.out.println();
       scan.close();
    }
}