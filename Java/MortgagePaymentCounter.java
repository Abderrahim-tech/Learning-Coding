package com.mycompany.morgage1;

import java.text.NumberFormat;
import java.util.Scanner;

public class Morgage1 {

    public static void main(String[] args) {
    System.out.print ("Please Give the ammount wanted to morgage : ");
        Scanner amount = new Scanner(System.in);
        String valueString = amount.nextLine();
         int value;
         Integer temp = null;
        value = temp.parseInt(valueString);
        System.out.print ("Please Give the percentage of intrest (%) : ");
        Scanner percentage = new Scanner(System.in);
        String per;
        per = percentage.nextLine();
         int percents;
        percents = temp.parseInt(per);
        System.out.print ("Please Give the time-periode in which you will be paying back : ");
        Scanner time = new Scanner(System.in);
        String timeT;
        timeT = time.nextLine();
        int timeToPay;
        timeToPay = temp.parseInt(timeT);
        double intrest;
        intrest = (value*percents)/100;
        double pay;
        pay = value/timeToPay;
        NumberFormat moneyFormat = NumberFormat.getCurrencyInstance();
        String formatedAmount = moneyFormat.format(pay);
        System.out.println ("The Monthly fee for the Load is : " + formatedAmount );
        System.out.println("The Intrest per Month : " + (intrest/timeToPay));
    }
}
