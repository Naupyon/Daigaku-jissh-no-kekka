package CLI_Pendaftaran_Lomba_YoYo.division;

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