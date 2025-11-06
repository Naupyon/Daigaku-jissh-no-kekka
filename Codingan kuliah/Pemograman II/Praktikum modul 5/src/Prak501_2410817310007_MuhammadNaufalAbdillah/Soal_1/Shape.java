package Prak501_2410817310007_MuhammadNaufalAbdillah.Soal_1;

public abstract class Shape {
    protected String shapeName;

    public Shape(String shapeName) {
        this.shapeName = shapeName;
    }

    abstract protected double area();

    public String toString() {
        return this.shapeName;
    }
}