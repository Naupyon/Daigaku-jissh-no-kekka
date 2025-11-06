package Prak501_2410817310007_MuhammadNaufalAbdillah.Soal_1;

public class Cylinder extends Shape {
    private double radius;
    private double height;

    public Cylinder(double radius, double height) {
        super("Cylinder");
        this.radius = radius;
        this.height = height;
    }
    @Override
    protected double area(){
        return 2 * Math.PI * radius * (height * radius);
    }

    @Override
    public String toString(){
        return super.toString() + " of radius " + radius + " and height " + height;
    }
}