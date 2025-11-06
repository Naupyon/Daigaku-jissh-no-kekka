package Prak302_2410817310007_MuhammadNaufalAbdillah.Soal2;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Scanner;

public class main_soal2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        HashMap<Integer, String> Month = new HashMap<>();
        Month.put(1, "Januari");
        Month.put(2, "Februari");
        Month.put(3, "Maret");
        Month.put(4, "April");
        Month.put(5, "Mei");
        Month.put(6, "Juni");
        Month.put(7, "Juli");
        Month.put(8, "Augustus");
        Month.put(9, "September");
        Month.put(10, "Oktober");
        Month.put(11, "November");
        Month.put(12, "Desember");

        LinkedList<Country> ListCountry = new LinkedList<>();
        int total = scan.nextInt();
        scan.nextLine();

        for (int i = 0; i < total; i++) {
            String countryName = scan.nextLine();
            String leadershipType = scan.nextLine();
            String leaderName = scan.nextLine();

            if (leadershipType.equals("Monarki")) {
                ListCountry.add(new Country(countryName, leadershipType, leaderName));
            } else{
                int independenceDay = scan.nextInt();
                int independenceMonth = scan.nextInt();
                int independenceYear = scan.nextInt();
                scan.nextLine();
                ListCountry.add(new Country(countryName, leadershipType, leaderName, independenceDay, independenceMonth, independenceYear));
            }
        }
        for (Country country : ListCountry) {
            country.display(Month);
        }
    }
}