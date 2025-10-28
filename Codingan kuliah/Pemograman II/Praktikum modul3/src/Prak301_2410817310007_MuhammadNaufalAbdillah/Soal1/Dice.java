package Prak301_2410817310007_MuhammadNaufalAbdillah.Soal1;

import java.util.Random;

public class Dice {
    private int value;

    public void randomValue(){
        Random random = new Random();
        this.value = random.nextInt(6) + 1;
    }

    public int getValue() {
        return value;
    }
}