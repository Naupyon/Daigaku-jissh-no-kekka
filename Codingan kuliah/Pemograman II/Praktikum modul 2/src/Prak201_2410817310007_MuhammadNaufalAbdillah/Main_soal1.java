package Prak201_2410817310007_MuhammadNaufalAbdillah;

public class Main_soal1 {
    public static void main(String[] args) {

        Fruits Apple = new Fruits();
        Apple.setname("Apple");
        Apple.setweight(0.4);
        Apple.setprice(7000);
        Apple.settotalbuy(40.0);

        Fruits Mango = new Fruits();
        Mango.setname("Mango");
        Mango.setweight(0.2);
        Mango.setprice(3500);
        Mango.settotalbuy(15.0);

        Fruits Avocado = new Fruits();
        Avocado.setname("Avocado");
        Avocado.setweight(0.25);
        Avocado.setprice(10000);
        Avocado.settotalbuy(12.0);

        Apple.show();
        Mango.show();
        Avocado.show();
    }
}