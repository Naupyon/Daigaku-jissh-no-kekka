package Prak501_2410817310007_MuhammadNaufalAbdillah.Soal_1;

public class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double height, double width) {
        super("Rectangle");
        this.length = height;
        this.width = width;
    }
    @Override
    public double area() {
        return length * width;
    }

    @Override
    public String toString() {
        return super.toString() + " of length " + length + " and width " + width;
    }
}