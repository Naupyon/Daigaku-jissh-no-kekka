import java.util.Scanner;
public class prak105_2410817310007_MuhammadNaufalAbdillah {
    public static void main(String[] args) {
        final double PHI = 3.14;

        Scanner scan = new Scanner(System.in);

        System.out.print("Masukan Jari-jari: ");
        double r = scan.nextDouble();

        System.out.print("Masukan Tinggi: ");
        double t = scan.nextDouble();

        double volume = PHI * r * r * t;

        System.out.printf("Volume tabung dengan Jari - jari %.1f cm dan tinggi %.1f cm adalah %.3f cm3", r, t, volume);

        System.out.println();

        scan.close();
    }
}