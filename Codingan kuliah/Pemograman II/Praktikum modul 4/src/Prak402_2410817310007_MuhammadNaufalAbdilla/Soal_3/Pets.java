package Prak402_2410817310007_MuhammadNaufalAbdilla.Soal_3;

public class Pets {
    String petname;
    String petrace;

    public Pets(String petname, String petrace) {
        this.petname = petname;
        this.petrace = petrace;
    }

    public void display() {
        System.out.println();
        System.out.println("Detail Hewan Peliharaan:");
        System.out.println("Nama Hewan Peliharaan ku: " + petname);
        System.out.println("Dengan ras: " + petrace);
    }
}