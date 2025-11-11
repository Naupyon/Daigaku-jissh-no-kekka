package CLI_Pendaftaran_Lomba_YoYo.people;
import CLI_Pendaftaran_Lomba_YoYo.division.Division;

public class Registration {
    private  Participant participant;
    private Division division;

    public Registration(Participant participant, Division division) {
        this.participant = participant;
        this.division = division;
    }

    @Override
    public String toString() {
        return participant + ", Divisi: " + division.getName();
    }
}