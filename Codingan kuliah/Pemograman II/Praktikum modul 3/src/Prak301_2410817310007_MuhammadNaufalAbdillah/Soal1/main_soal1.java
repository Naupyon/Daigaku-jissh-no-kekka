package Prak301_2410817310007_MuhammadNaufalAbdillah.Soal1;

import java.util.LinkedList;
import java.util.Scanner;

public class main_soal1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        LinkedList <Dice> dices = new LinkedList <>();

        System.out.println();
        int diceNumber =  input.nextInt();

        for (int i = 0; i < diceNumber; i++) {
            Dice dice = new Dice();
            dice.randomValue();
            dices.add(dice);
        }

        int totalValue = 0;

        for (int i = 0; i < dices.size(); i++) {
            int value = dices.get(i).getValue();
            System.out.println("Dadu ke - " + (i + 1)+ " bernilai " + value);
            totalValue += value;
        }
        System.out.println("Total nilai dadu keseluruhan " + totalValue);
    }
}