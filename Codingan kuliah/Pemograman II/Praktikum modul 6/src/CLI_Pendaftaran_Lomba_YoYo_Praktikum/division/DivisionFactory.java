package CLI_Pendaftaran_Lomba_YoYo_Praktikum.division;

public class DivisionFactory {
    public static Division getDivision(int choice){
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