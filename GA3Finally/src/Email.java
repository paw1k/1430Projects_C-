public class Email {
    protected String username;
    protected String domain;
    protected String extension;

    public Email(){
        username = null;
        domain = null;
        extension = null;
    }

    public Email(String usrnm, String dmn, String extns){
        this.username = usrnm;
        this.domain = dmn;
        this.extension = extns;
    }

    public String getUsername(){
        return username;
    }

    public String getDomain(){
        return domain;
    }

    public String getExtension(){
        return extension;
    }

    public int getCode(){
        return 0;
    }

    public String toString()
    {return String.format("%s@%s.%s", username, domain, extension);
    }
}