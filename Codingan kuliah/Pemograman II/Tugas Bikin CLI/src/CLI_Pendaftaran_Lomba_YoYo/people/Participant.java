package CLI_Pendaftaran_Lomba_YoYo.people;

public class Participant {
    private String name;
    private int age;

    public Participant(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }
    public int getAge() {
        return age;
    }

    @Override
    public String toString() {
        return "Nama: " + name + ", Umur: " + age + " Tahun";
    }
}