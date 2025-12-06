package CLI_Pendaftaran_Lomba_YoYo_Praktikum.event;

import CLI_Pendaftaran_Lomba_YoYo_Praktikum.InputHandler;
import CLI_Pendaftaran_Lomba_YoYo_Praktikum.people.RegisterParticipants;

import java.util.Scanner;

public class App {
    private Competition compe = new Competition();
    private Scanner scan = new Scanner(System.in);
    private InputHandler inputHandler = new InputHandler(scan);
    private Menu menu = new Menu(scan);

    public App() {
        compe.addObserver(new AdminLogger());
        RegisterParticipants regis = new RegisterParticipants(compe, inputHandler);
        menu.addMenuAction(1, regis::run);
        menu.addMenuAction(2, compe::showAllRegis);
        menu.addMenuAction(0, this::exitApp);
    }

    public void run() {
        menu.show();
    }

    private void exitApp() {
        System.out.println("Terimakasih, Sampai Jumpa di Lomba");
    }
}