package CLI_Pendaftaran_Lomba_YoYo.people;

import CLI_Pendaftaran_Lomba_YoYo.division.*;
import CLI_Pendaftaran_Lomba_YoYo.event.Competition;
import java.util.Scanner;

public class RegisterParticipants {
    private Competition compe;
    private Scanner scan;

    public RegisterParticipants(Competition compe, Scanner scan) {
        this.compe = compe;
        this.scan = scan;
    }

    public void run(){
        System.out.print("Masukkan nama peserta: ");
        String name = scan.nextLine();

        System.out.print("Masukkan umur peserta: ");
        int age;
        try {
            age = Integer.parseInt(scan.nextLine());
        } catch (NumberFormatException e) {
            System.out.println("Umur tidak valid");
            return;
        }

        System.out.println("\nPilih Divisi:");
        System.out.println("1. 1A (Unresponsive Yoyo)");
        System.out.println("2. 2A (Double Hand Responsive Yoyo)");
        System.out.println("3. 3A (Double Hand Unresponsive Yoyo)");
        System.out.println("4. 4A (Offstring)");
        System.out.println("5. 5A (Offhand)");
        System.out.print("Pilihan: ");

        int divChoice;
        try {
            divChoice = Integer.parseInt(scan.nextLine());
        } catch (NumberFormatException e) {
            System.out.println("Input yang di masukan salah");
            return;
        }
        Division division = getDivision(divChoice);
        if (division == null) {
            System.out.println("Divisi tidak ada");
            return;
        }

        Participant p = new Participant(name, age);
        Registration r = new Registration(p, division);
        compe.addRegis(r);

        System.out.println("Pendaftaran berhasil");
    }

    private Division getDivision(int choice) {
        return switch (choice) {
            case 1 -> new Division1A();
            case 2 -> new Division2A();
            case 3 -> new Division3A();
            case 4 -> new Division4A();
            case 5 -> new Division5A();
            default -> null;
        };
    }
}