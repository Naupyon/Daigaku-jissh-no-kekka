package CLI_Pendaftaran_Lomba_YoYo_Praktikum.event;

import CLI_Pendaftaran_Lomba_YoYo_Praktikum.people.Registration;
import java.util.ArrayList;
import java.util.List;

public class Competition implements ICompetitionService {
    private List<Registration> registrations = new ArrayList<>();
    private List<RegistrationObserver> observers = new ArrayList<>();

    public void addObserver(RegistrationObserver observer) {
        observers.add(observer);
    }

    @Override
    public void addRegis(Registration r) {
        registrations.add(r);
        notifyObservers(r);
    }

    private void notifyObservers(Registration r) {
        for (RegistrationObserver observer : observers) {
            observer.onRegistrationAdded(r);
        }
    }

    @Override
    public void showAllRegis() {
        if (registrations.isEmpty()) {
            System.out.println("Belum ada peserta yang terdaftar.");
            return;
        }
        System.out.println("\nDaftar Peserta Terdaftar");
        registrations.forEach(System.out::println);
    }
}