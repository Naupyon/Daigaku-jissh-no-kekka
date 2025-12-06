package CLI_Pendaftaran_Lomba_YoYo_Praktikum.event;

import CLI_Pendaftaran_Lomba_YoYo_Praktikum.people.Registration;

public interface ICompetitionService {
    void addRegis(Registration regis);
    void showAllRegis();
}