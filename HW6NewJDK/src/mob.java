class mob extends npc {
    private String classType;
    private boolean questMob;

    public mob() {
        classType = null;
        questMob = false;
    }

    public mob(String type, String name, char gender, int hitPoints, String zone, String classType, boolean questMob) {
        super(type, name, gender, hitPoints, zone);
        this.classType = classType;
        this.questMob = questMob;
    }


    public String toString() {
        return String.format("%15s%15s%15s",super.toString(),classType,questMob);
    }

    public String getType() {
        return "Mob";
    }
}