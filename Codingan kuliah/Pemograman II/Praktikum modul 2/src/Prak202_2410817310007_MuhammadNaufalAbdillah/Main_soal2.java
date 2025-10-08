package Prak202_2410817310007_MuhammadNaufalAbdillah;

public class Main_soal2 {
    public static void main(String[] args) {
        Coffee Coffee1 = new Coffee();
        Coffee1.Name = "Espresso";
        Coffee1.Size = "medium";
        Coffee1.Price = 25000;

        Coffee1.info();
        Coffee1.setConsumer("Alice");
        System.out.println("Pembeli kopi " + Coffee1.getConsumer());
        System.out.println("Pajak Kopi: Rp. " + Coffee1.getTax());
    }
}