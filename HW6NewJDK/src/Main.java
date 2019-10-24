import java.util.Scanner;

public class Main {

    public static void main(String[] args) {


        Scanner input = new Scanner(System.in);
        int charCount = input.nextInt();
        input.nextLine();
        character[] charArr = new character[charCount];


        for (int i = 0; i < charCount; i++) {

            String type = input.nextLine();

            if (type.equals("Player")) {

                String name = input.nextLine();
                char gender = input.next().charAt(0); input.nextLine();
                int hitPoints = input.nextInt(); input.nextLine();
                String classType = input.nextLine();
                String armorType = null;


                if (classType.equals("Mage")){
                    armorType="Cloth";
                }else if(classType.equals("Rogue")){
                    armorType="Leather";
                }else if(classType.equals("Warrior")){
                    armorType="Platemail";
                }

                player myPlaya = new player(type, name, gender, hitPoints, classType, armorType);
                charArr[i] = myPlaya;


            } else if (type.equals("Mob")) {

                String name = input.nextLine();
                char gender = input.next().charAt(0);
                int hitPoints = input.nextInt(); input.nextLine();
                String armorType = null;
                String zone = input.nextLine();
                String classType = input.nextLine();
                boolean questMob = input.nextBoolean();
                input.nextLine();

                mob myMob = new mob(type, name, gender, hitPoints, zone, classType, questMob);
                charArr[i] = myMob;

            } else if (type.equals("Townsperson")) {


                String name = input.nextLine();
                char gender = input.next().charAt(0);
                int hitPoints = input.nextInt();
                String classType = input.nextLine();
                String armorType = null;
                String zone = input.nextLine();
                boolean hasQuest = input.nextBoolean();
                input.nextLine();

                townsperson myTownsperson = new townsperson(type, name, gender, hitPoints, zone, hasQuest);
                charArr[i]=myTownsperson;
            }


        }


        System.out.print("Player Characters");
        System.out.format("\n%15s%15s%15s%15s%25s\n", "Name", "Gender", "Hit Points", "Class", "Equipable Gear");
        for (int k = 0; k <charCount;k++){
            if(charArr[k].getType().equals("Player")){

                charArr[k].toString();
                System.out.println(charArr[k].toString());
            }
        }

        System.out.print("\n\nNPC's - Mobs");
        System.out.format("\n%15s%15s%15s%25s%15s%15s\n", "Name", "Gender", "Hit Points", "Zone", "Class", "Quest Mob");
        for (int k = 0; k < charCount;k++){
            if(charArr[k].getType().equals("Mob")){

                charArr[k].toString();
                System.out.println(charArr[k].toString());

            }
        }

        System.out.print("\n\nNPC's - Towns People");
        System.out.format("\n%15s%15s%15s%25s%15s\n", "Name", "Gender", "Hit Points", "Zone","Has Quest?");
        for (int k = 0; k <charCount;k++){
            if(charArr[k].getType().equals("Townsperson")){

                charArr[k].toString();
                System.out.println(charArr[k].toString());

            }
        }

    }
}