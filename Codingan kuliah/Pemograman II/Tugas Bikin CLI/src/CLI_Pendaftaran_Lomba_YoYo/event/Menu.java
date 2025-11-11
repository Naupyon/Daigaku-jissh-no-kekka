package CLI_Pendaftaran_Lomba_YoYo.event;

import java.util.*;

public class Menu {
    private Scanner scan;
    private  Map<Integer, Runnable> menuActions = new LinkedHashMap<>();

    public Menu(Scanner scanner) {
        this.scan = scanner;
    }

    public void addMenuAction(int key, Runnable action) {
        menuActions.put(key, action);
    }

    public void show() {
        int choice = -1;
        while (choice != 0) {
            System.out.println("\nPendaftaran Lomba Yoyo CLI");
            System.out.println("1. Daftar Peserta");
            System.out.println("2. Lihat Peserta");
            System.out.println("0. Keluar");
            System.out.print("Pilih menu: ");

            try {
                choice = Integer.parseInt(scan.nextLine());
                Runnable action = menuActions.get(choice);
                if (action != null) action.run();
                else System.out.println("Pilihan tidak valid");
            } catch (NumberFormatException e) {
                System.out.println("Masukkan angka yang valid");
            }
        }
    }
}