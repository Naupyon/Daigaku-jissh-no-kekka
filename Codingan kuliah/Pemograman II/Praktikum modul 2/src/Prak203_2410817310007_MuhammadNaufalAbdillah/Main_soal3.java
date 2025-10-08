package Prak203_2410817310007_MuhammadNaufalAbdillah;

public class Main_soal3 {
    public static void main(String[] args)
    {
        Pegawai p1 = new Pegawai();

        //di baris ini memiliki error disebabkan tidak adanya penggunaan titik koma (;) di akhir pernyataan.
        //kode awal yang salah : p1.nama = "Roi"
        p1.nama = "Roi";

        //di baris ini memiliki error apabila tipe data atribut "asal" masih menggunakan data tipe char.
        p1.asal = "Kingdom of Orvel";

        //di baris ini memiliki error disebabkan method setJabatan belum ditambahkan parameter.
        p1.setJabatan("Assasin");

        //di baris ini kita menambahkan nilai untuk umur karena di class Employee kita belum menginisialisasikannya.
        p1.umur = 17;

        System.out.println("Nama Pegawai: " + p1.getNama());
        System.out.println("Asal: " + p1.getAsal());
        System.out.println("Jabatan: " + p1.jabatan);
        System.out.println("Umur: " + p1.umur + " tahun");
    }
}