package Prak402_2410817310007_MuhammadNaufalAbdilla.Soal_3;

import java.util.Scanner;

public class Main_soal3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("pilih jenis hewan yang ingin di input: ");
        System.out.println("1. kucing");
        System.out.println("2. Anjing");
        System.out.print("Masukan Pilihan: ");
        int choice = input.nextInt();
        input.nextLine();

        if (choice == 1)
            Cats.displayCatsDetail().display();
        else if (choice == 2)
            Dogs.displayDogsDetail().display();
        else System.out.println("pilihan tidak ada");

        input.close();
    }
}