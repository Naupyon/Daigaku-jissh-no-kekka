package CLI_Pendaftaran_Lomba_YoYo_Praktikum.event;

import CLI_Pendaftaran_Lomba_YoYo_Praktikum.people.Registration;

public class AdminLogger implements RegistrationObserver {
    @Override
    public void onRegistrationAdded(Registration regis) {
        System.out.println("Peserta baru berhasil terdaftarkan.");
    }
}