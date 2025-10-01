import java.util.Scanner;
public class prak104_2410817310007_MuhammadNaufalAbdillah {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Tangan Abu: ");
        String[] AbuMoves = scan.nextLine().split(" ");

        System.out.print("Tangan Bagas: ");
        String[] BagasMoves = scan.nextLine().split(" ");

        int AbuScore = 0;
        int BagasScore = 0;

        for (int i = 0; i < 3; i++) {
            String Abu = AbuMoves[i];
            String Bagas = BagasMoves[i];

            if (Abu.equals(Bagas)) {
                continue;
            }
                else if ((Abu.equals("B") && Bagas.equals("G")) ||
                    (Abu.equals("G") && Bagas.equals("K")) ||
                    (Abu.equals("K") && Bagas.equals("B"))){
                    AbuScore++;
                } else {
                    BagasScore++;
                }
        }
            if (AbuScore > BagasScore) {
                System.out.println("Abu");
            }
            else if (AbuScore < BagasScore) {
                System.out.println("Bagas");
            }
            else {
                System.out.println("Seri");
            }
        scan.close();
    }
}