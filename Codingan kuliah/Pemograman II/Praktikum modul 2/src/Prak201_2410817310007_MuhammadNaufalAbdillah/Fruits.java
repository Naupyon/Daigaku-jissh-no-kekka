package Prak201_2410817310007_MuhammadNaufalAbdillah;

public class Fruits {
    private String Namefruit;
    private double price;
    private double weight;
    private double totalbuy;

    public void setname (String namefruit){
        this.Namefruit = namefruit;
    }

    public void setprice (double price ){
        this.price = price;
    }

    public void setweight (double weight ){
        this.weight = weight;
    }

    public void settotalbuy(double totalbuy ){
        this.totalbuy = totalbuy;
    }

    public String getname (){
        return this.Namefruit;
    }

    public double getprice (){
        return this.price;
    }

    public double getweight (){
        return this.weight;
    }

    public double gettotalbuy (){
        return this.totalbuy;
    }

    public double BeforeDicount(){
        return price * (totalbuy / weight);
    }

    public double Dicount(){
        double fruitDiscount = totalbuy /4;
        return (int) fruitDiscount * (price * 4) * 0.02;
    }

    public double AfterDicount(){
        return BeforeDicount() - Dicount();
    }

    public void show(){
        System.out.println();
        System.out.println("Nama Buah: " + getname());
        System.out.println("Berat: " + getweight());
        System.out.println("Harga: " + getprice());
        System.out.println("Total: " + gettotalbuy() + "Kg");
        System.out.printf("Harga Sebelum Diskon:  Rp%.2f\n ", BeforeDicount());
        System.out.printf("Total Diskon: Rp%.2f\n ", Dicount());
        System.out.printf("Harga Setelah diskon: Rp%.2f\n ", AfterDicount());
    }
}