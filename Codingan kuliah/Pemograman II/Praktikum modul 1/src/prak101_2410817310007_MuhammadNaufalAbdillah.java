import java.util.Scanner;
public class prak101_2410817310007_MuhammadNaufalAbdillah {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Masukan Nama Lengkap: ");
        String Name = scan.nextLine();

        System.out.println("Masukan Tempat lahir: ");
        String Birthplace = scan.nextLine();

        System.out.println("Masukan Tanggal Lahir: ");
        int Birthdate = scan.nextInt();

        System.out.println("Masukan Bulan Lahir: ");
        int BirthMonth = scan.nextInt();

        String Monthname = switch (BirthMonth){
            case  1 -> "January";
            case 2 -> "February";
            case 3 -> "March";
            case 4 -> "April";
            case 5 -> "May";
            case 6 -> "June";
            case 7 -> "July";
            case 8 -> "August";
            case 9 -> "September";
            case 10 -> "October";
            case 11 -> "November";
            case 12 -> "December";
            default -> "Bulan Tidak ada";
        };

        System.out.println("Masukan Tahun Lahir: ");
        int Birthyear = scan.nextInt();
        scan.nextLine();

        System.out.println("Masukan Tinggi Badan: ");
        int Height = scan.nextInt();
        scan.nextLine();

        System.out.println("Masukan Berat Badan: ");
        int weight= scan.nextInt();
        scan.nextLine();

        System.out.println("\nNama lengkap " + Name + " lahir di " + Birthplace + " pada tanggal " + Birthdate + " " + Monthname + " " + Birthyear +
                "\nTinggi badan " + Height + " cm dan Berat " + weight + " kilogram");
    }
}