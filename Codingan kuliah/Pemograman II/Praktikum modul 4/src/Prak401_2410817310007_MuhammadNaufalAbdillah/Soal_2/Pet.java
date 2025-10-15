package Prak401_2410817310007_MuhammadNaufalAbdillah.Soal_2;

public class Pet {
    String name;
    String race;

    public Pet(String name, String race){
        this.name = name;
        this.race = race;
    }

    public void Display(){
        System.out.println();
        System.out.println("Detail Hewan Peliharaan:");
        System.out.println("Nama Hewan Peliharaan ku: " + name);
        System.out.println("Dengan ras: " + race);
    }
}
