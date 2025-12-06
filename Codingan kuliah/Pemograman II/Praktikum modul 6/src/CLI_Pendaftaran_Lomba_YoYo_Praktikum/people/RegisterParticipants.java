package CLI_Pendaftaran_Lomba_YoYo_Praktikum.people;

import CLI_Pendaftaran_Lomba_YoYo_Praktikum.InputHandler;
import CLI_Pendaftaran_Lomba_YoYo_Praktikum.division.*;
import CLI_Pendaftaran_Lomba_YoYo_Praktikum.event.ICompetitionService;
import CLI_Pendaftaran_Lomba_YoYo_Praktikum.InputHandler;

public class RegisterParticipants {
    private ICompetitionService compe;
    private InputHandler inputHandler;

    public RegisterParticipants(ICompetitionService compe, InputHandler inputHandler) {
        this.compe = compe;
        this.inputHandler = inputHandler;
    }

    public void run(){
        String name = inputHandler.getString("Masukkan nama peserta: ");
        int age = inputHandler.getInt("Masukkan umur peserta: ");
        if (age <= 0) return;

        System.out.println("\nPilih Divisi:");
        System.out.println("1. 1A (Unresponsive Yoyo)");
        System.out.println("2. 2A (Double Hand Responsive Yoyo)");
        System.out.println("3. 3A (Double Hand Unresponsive Yoyo)");
        System.out.println("4. 4A (Offstring)");
        System.out.println("5. 5A (Offhand)");

        int divChoice = inputHandler.getInt("Pilihan: ");

        Division division = DivisionFactory.getDivision(divChoice);

        if (division != null) {
            Division proDivision = new ProDivisionDecorator(division);

            Participant p = new Participant(name, age);
            Registration r = new Registration(p, proDivision);
            compe.addRegis(r);

            System.out.println("Pendaftaran berhasil");
        } else {
            System.out.println("Divisi tidak ada");
        }
    }
}