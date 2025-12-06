package CLI_Pendaftaran_Lomba_YoYo_Praktikum;
import java.util.Scanner;

public class InputHandler {
    private Scanner scan;

    public InputHandler(Scanner scan) {
        this.scan = scan;
    }

    public String getString(String prompt) {
        System.out.print(prompt);
        return scan.nextLine();
    }

    public int getInt(String prompt) {
        System.out.print(prompt);
        try {
            return Integer.parseInt(scan.nextLine());
        }
        catch (NumberFormatException e) {
            System.out.println("Input yang Dimaksukan tidak benar, Masukan Angka");
            return -1;
        }
    }
}