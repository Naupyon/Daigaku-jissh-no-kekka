package Prak302_2410817310007_MuhammadNaufalAbdillah.Soal2;

import java.util.HashMap;

public class Country {
    private String countryName, leadershipType, leaderName;
    private int independenceDay, indepedenceMonth, indepedenceYear;

    public Country(String countryName, String leadershipType, String leaderName, int independenceDay, int indepedenceMonth, int indepedenceYear) {
        this.countryName = countryName;
        this.leadershipType = leadershipType;
        this.leaderName = leaderName;
        this.independenceDay = independenceDay;
        this.indepedenceMonth = indepedenceMonth;
        this.indepedenceYear = indepedenceYear;
    }

    public Country(String countryName, String leadershipType, String leaderName) {
        this.countryName = countryName;
        this.leadershipType = leadershipType;
        this.leaderName = leaderName;
    }

    public String getcountryName() {
        return countryName;
    }

    public String getleadershipType() {
        return leadershipType;
    }

    public String getleaderName() {
        return leaderName;
    }

    public int getIndependenceDay() {
        return independenceDay;
    }

    public int getindependenceMonth() {
        return indepedenceMonth;
    }

    public int getindependenceYear() {
        return indepedenceYear;
    }

    public void display(HashMap<Integer,String> Month){
        if(leadershipType.equalsIgnoreCase("Monarki")){
            System.out.println("Negara " + countryName + "Mempunyai raja bernama " + leaderName);
        }else{
            System.out.println("Negara " + countryName + " mempunyai " + capitalize(leadershipType) + " bernama " + leaderName);
            System.out.println("Deklarasi Kemerdekaan pada tanggal " + independenceDay + " " + Month.get(indepedenceMonth) + " " + indepedenceYear);
        }
        System.out.println();
    }
    private static String capitalize(String text) {
        if (text == null || text.isEmpty()) return text;
        return text.substring(0, 1).toUpperCase() + text.substring(1).toLowerCase();
    }
}