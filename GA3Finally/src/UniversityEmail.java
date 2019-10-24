public class UniversityEmail extends Email {

    protected String department;
    protected int code;

    public UniversityEmail(){
        super();
        department = null;
        code = 0;
    }

    public UniversityEmail(String usrnm, String dmn, String extns, String dpt){
        super(usrnm, dmn, extns);
        this.department = dpt;
        switch (dpt){
            case "art":
                code = 1;
                break;
            case "chee":
                code = 2;
                break;
            case "chem":
                code = 3;
                break;
            case "coe":
                code = 4;
                break;
            case "cs":
                code = 5;
                break;
            case "egr":
                code = 6;
                break;
            case "polsci":
                code = 7;
                break;
            default:
                code = 0;
                break;
        }
    }

    public String getDepartment(){
        return department;
    }

    public int getCode(){
        return code;
    }

    public String toString()
    {return String.format("%s@%s.%s.%s", username, department, domain, extension);
    }


}//end of UniversityEmail