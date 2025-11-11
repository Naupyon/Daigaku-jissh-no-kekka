package CLI_Pendaftaran_Lomba_YoYo.event;

import CLI_Pendaftaran_Lomba_YoYo.people.Registration;
import java.util.List;
import java.util.ArrayList;

public class Competition {
    private List<Registration> registrations = new ArrayList<>();

    public void addRegis(Registration r) {
        registrations.add(r);
    }

    public void showAllRegis(){
        if(registrations.isEmpty()){
            System.out.println("Belum ada peserta yang terdaftar.");
            return;
        }
        System.out.println("\nDaftar Peserta Terdaftar");
        registrations.forEach(System.out::println);
    }
}