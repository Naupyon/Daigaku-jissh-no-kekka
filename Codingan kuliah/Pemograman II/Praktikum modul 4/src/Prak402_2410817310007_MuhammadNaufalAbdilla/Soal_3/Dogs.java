package Prak402_2410817310007_MuhammadNaufalAbdilla.Soal_3;

import java.util.Scanner;

public class Dogs extends Pets {
    private String furcolor;
    private String[] skill;

    public Dogs(String petname, String petrace, String furcolor, String[] skill) {
        super(petname, petrace);
        this.furcolor = furcolor;
        this.skill = skill;
    }

    @Override
    public void display(){
        super.display();
        System.out.println("warna bulu: " + furcolor);
        System.out.print("Kemampuan: " );
        for (String s : skill) {
            System.out.print(s + " ");
        }
        System.out.println();
    }

    public static Dogs displayDogsDetail(){
        Scanner input = new Scanner(System.in);
        System.out.print("Nama Hewan Peliharaan: ");
        String petname = input.nextLine();
        System.out.print("Ras: ");
        String petrace = input.nextLine();
        System.out.print("Warna bulu: ");
        String furcolor = input.nextLine();
        System.out.print("Kemampuan: ");
        String[] skill = input.nextLine().split(", ");
        return new Dogs(petname, petrace, furcolor, skill);
    }
}