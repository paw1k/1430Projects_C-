class character {
    String type, name;
    char gender;
    int hitPoints;

    public character() {
        this.type = null;
        this.name = null;
        this.gender = '\0';
        this.hitPoints = 0;

    }

    public character(String type, String name, char gender, int hitPoints) {
        this.type = type;
        this.name = name;
        this.gender = gender;
        this.hitPoints = hitPoints;
    }


    public String toString() {
        return String.format("%15s%15s%15s", name, gender, hitPoints);
    }

    public String getType() {
        return type;
    }

}

