package Prak202_2410817310007_MuhammadNaufalAbdillah;

public class Coffee {
    public String Name;
    public String Size;
    public double Price;
    public String Consumer;

    public void setConsumer(String consumer){
        this.Consumer = consumer;
    }

    public String getConsumer(){
        return this.Consumer;
    }

    public double getTax(){
        double Tax = this.Price * 0.11;
        return Tax;
    }

    public void info(){
        System.out.println();
        System.out.println("Nama Kopi: " + Name);
        System.out.println("Ukuran: " + Size);
        System.out.println("Harga: Rp. " + Price);
    }
}