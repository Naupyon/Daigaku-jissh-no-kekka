package Prak303_2410817310007_MuhammadNaufalAbdillah.Soal3;

import java.util.ArrayList;
import java.util.Scanner;

public class main_Soal3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Student> studentList = new ArrayList<>();

        int choice;

        do {
            System.out.println("Menu");
            System.out.println("1. Tambah Mahasiswa");
            System.out.println("2. Hapus Mahasiswa bedasarkan Nim");
            System.out.println("3. Cari Mahasiswa bedasarkan Nim");
            System.out.println("4. Tampilkan daftar Mahasiswa");
            System.out.println("0. Keluar");
            System.out.print("Pilihan: ");
            choice = input.nextInt();
            input.nextLine();

            switch(choice){
                case 1:
                    System.out.print("Masukan Nama Mahasiswa: ");
                    String name = input.nextLine();
                    System.out.print("Masukan Nim Mahasiswa (harus unik): ");
                    String nim = input.nextLine();

                    boolean exist = false;
                    for(Student student : studentList){
                        if (student.getNim().equals(nim)){
                            exist = true;
                            break;
                        }
                    }
                    if (exist){
                        System.out.println("Mahasiswa dengan Nim " + nim + " sudah ada terdaftar.");
                    }else {
                        studentList.add(new Student(name,nim));
                        System.out.println("Mahasiswa " + name + " ditambahkan");
                    }
                    break;

                case 2:
                    System.out.print("Masukan Nim Mahasiswa yang akan dihapus: ");
                    String deleteNim = input.nextLine();
                    boolean foundDelete = false;

                    for(int i = 0; i < studentList.size(); i++){
                        if (studentList.get(i).getNim().equals(deleteNim)){
                            studentList.remove(i);
                            foundDelete = true;
                            System.out.println("Mahasiswa dengan Nim " + deleteNim + " Dihapus.");
                            break;
                        }
                    }
                    if (!foundDelete){
                        System.out.println("Mahasiswa dengan " + deleteNim + " tidak ditemukan.");
                    }
                    break;

                case 3:
                    System.out.print("Masukan Nim Mahasiswa yang ingin dicari:");
                    String searchNim = input.nextLine();
                    boolean foundSearch = false;

                    for(Student student : studentList){
                        if (student.getNim().equals(searchNim)){
                            System.out.println("Data Mahasiwa ditemukan: " );
                            System.out.println("Nim" + student.getNim() + "Nama: " +  student.getName());
                            foundSearch = true;
                            break;
                        }
                    }
                    if (!foundSearch){
                        System.out.println(" Mahasiswa dengan NIM " + searchNim + " tidak ditemukan.");
                    }
                    break;

                case 4:
                    if(studentList.isEmpty()){
                        System.out.println("Daftar Mahasiswa kosong");
                    }else{
                        System.out.print("Mahasiswa ditemukan: ");
                        for(Student student : studentList){
                            System.out.println(student);
                        }
                    }
                    break;

                case 0:
                    System.out.println("Terima Kasih");
                    studentList.clear();
                    break;

                default:
                    System.out.println("Pilihan tidak valid");
            }
            System.out.println();
        } while (choice != 0);

        input.close();
    }
}