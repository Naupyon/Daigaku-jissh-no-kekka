package CLI_Pendaftaran_Lomba_YoYo.event;

import java.util.*;
import CLI_Pendaftaran_Lomba_YoYo.people.RegisterParticipants;

public class App {
    private Competition Compe = new Competition();
    private Scanner scan = new Scanner(System.in);
    private Menu menu = new Menu(scan);

    public App() {
        RegisterParticipants register = new RegisterParticipants(Compe, scan);
        menu.addMenuAction(1, register::run);
        menu.addMenuAction(2, Compe::showAllRegis);
        menu.addMenuAction(0, this::exitApp);
    }

    public void run() {
        menu.show();
    }

    private void exitApp() {
        System.out.println("Terimakasih, Sampai Jumpa di Lomba");
    }
}