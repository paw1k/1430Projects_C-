class npc extends character {
    protected String zone;

    public npc() {

        zone = null;
    }

    public npc(String type, String name, char gender, int hitPoints, String zone) {
        super(type, name, gender, hitPoints);
        this.zone = zone;
    }


    public String toString() {
        return String.format("%15s%25s",super.toString(), zone);
    }

    public String getType() {
        return type;
    }
}
