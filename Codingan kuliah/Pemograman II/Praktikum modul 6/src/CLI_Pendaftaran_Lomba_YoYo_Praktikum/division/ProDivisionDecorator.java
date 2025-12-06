package CLI_Pendaftaran_Lomba_YoYo_Praktikum.division;

public class ProDivisionDecorator implements Division{
    public Division wrappedDivision;

    public ProDivisionDecorator(Division division){
        this.wrappedDivision = division;
    }

    @Override
    public String getName(){
        return wrappedDivision.getName() + " Kategori Pro";
    }
}