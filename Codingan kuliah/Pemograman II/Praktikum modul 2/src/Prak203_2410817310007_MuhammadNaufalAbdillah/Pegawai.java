package Prak203_2410817310007_MuhammadNaufalAbdillah;

//Pada baris ini terdapat error karena perbedaan nama class dengan nama file.
//kode awal yang salah : public class Employess
public class Pegawai {
    public String nama;

    //di baris ini memiliki error disebabkan perbedaan antara tipe data char untuk atribut dengan bagian method yang memakai string.
    //kode awal yg salah : public char asal;
    public String asal;

    public String jabatan;
    public int umur;

    public String getNama() {
        return nama;
    }

    //Pada baris ini memiliki error disebabkan oleh method getAsal() mengembalikan String sedangkan atribut asal bertipe char.
    public String getAsal() {
        return asal;
    }

    //di baris ini memiliki error disebabkan method setJabatan() tidak mempunyai parameter(string j) untuk menerima nilai jabatan.
    //kode awal yang salah : public void setJabatan()
    public void setJabatan(String j){
        this.jabatan = j;
    }
}