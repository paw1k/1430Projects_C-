class townsperson extends npc {
    private boolean hasQuest;

    public townsperson() {
        hasQuest = false;
    }

    public townsperson(String type, String name, char gender, int hitPoints, String zone, boolean hasQuest) {
        super(type, name, gender, hitPoints, zone);
        this.hasQuest = hasQuest;
    }


    public String toString() {
        return String.format("%15s%15s",super.toString(),hasQuest);
    }

    public String getType() {
        return ("Townsperson");
    }
}