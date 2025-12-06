package CLI_Pendaftaran_Lomba_YoYo_Praktikum.division;

public abstract class DIvisionType implements Division{
    private String name;

    protected DIvisionType(String name) {
        this.name = name;
    }

    @Override
    public String getName() {
        return name;
    }
}