class player extends character {
    private String classType;
    private String armorType;

    public player() {
        this.classType = null;
        armorType = null;
    }

    public player(String type, String name, char gender, int hitPoints, String classType, String armorType) {
        super(type, name, gender, hitPoints);
        this.classType = classType;
        this.armorType = armorType;
    }


    public String toString() {
        return String.format("%15s%15s%25s",super.toString(),classType,armorType );
    }

    public String getType() {
        return type;
    }

}
