package Prak401_2410817310007_MuhammadNaufalAbdillah.Soal_2;

import java.util.Scanner;

public class Main_soal2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Nama Hewan Peliharaan : ");
        String name = input.nextLine();

        System.out.print("Ras : ");
        String race = input.nextLine();

        Pet Cat = new Pet(name,race);
        Cat.Display();
        input.close();
    }
}