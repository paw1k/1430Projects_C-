import java.util.ArrayList;
import java.util.Scanner;
import java.io.FileInputStream;
import java.io.PrintWriter;
import java.io.FileNotFoundException;


public class Main {

    static Scanner userInput = new Scanner(System.in);

    public static void main(String[] args) {

        PrintWriter outputStream;
        String inFile = "input.txt";
        String outFile = "out.txt";
        ArrayList<Email> emails = new ArrayList<Email>();//Creates dynamic array of emails

        //Reading file
        try {
            Scanner inputStream = new Scanner(new FileInputStream(inFile));

            while (inputStream.hasNext()) {

                String line = inputStream.next();
                String dpt = null;
                String dmn = null;
                String extnsn = null;

                //Checks if strings have '@' symbol
                if (line.indexOf("@") != -1) {
                    String[] emailPieces = line.split("[@.,]"); //splits strings that contain '@' accordingly
                    String usrnm = emailPieces[0];
                    if (emailPieces[1].equals("art") || emailPieces[1].equals("chee") || emailPieces[1].equals("chem") || emailPieces[1].equals("coe") ||
                            emailPieces[1].equals("cs") || emailPieces[1].equals("egr") || emailPieces[1].equals("polsci")) {
                        dpt = emailPieces[1];
                        if (dpt.equals(emailPieces[1])) {
                            dmn = emailPieces[2];
                            extnsn = emailPieces[3];
                        }
                    }//end of if
                    else {
                        dmn = emailPieces[1];
                        if (dmn.equals(emailPieces[1])) {
                            extnsn = emailPieces[2];
                        }
                    }//end of else


                    if (dmn.equals(emailPieces[1])) {
                        emails.add(new Email(usrnm, dmn, extnsn));//adds email to array and creates Email object
                    }//end of Email object
                    else if (dpt.equals(emailPieces[1])) {
                        emails.add(new UniversityEmail(usrnm, dmn, extnsn, dpt));//adds emails to array and creates UniversityEmail object
                    }//end of UniversityEmail object


                }//end of @ checker
            }//end of file reader


        } catch (FileNotFoundException e) {
            System.out.println("Error reading from " + inFile);
        }//end of inputStream


        //Output File
        try {
            outputStream = new PrintWriter(outFile);
            System.out.println("Input a number that represents the emails you would like to see: ");
            int numberChoice = userInput.nextInt();

            //Checks code number and writes to file the corresponding emails
            switch (numberChoice) {
                case 0:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 0) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 1:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 1) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 2:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 2) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 3:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 3) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 4:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 4) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 5:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 5) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 6:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 6) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 7:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() == 7) {
                            outputStream.println(r);
                        }
                    }
                    break;
                case 8:
                    for (int i = 0; i < emails.size(); i++) {
                        Email r = emails.get(i);
                        if (emails.get(i).getCode() >= 1) {
                            outputStream.println(r);
                        }
                    }
                    break;
                default:
                    break;
            }
            outputStream.close();
        } catch (FileNotFoundException e) {
            System.out.println("File " + outFile + " cannot be written to.");
            System.exit(0);
        }//end of outputStream
    }
}