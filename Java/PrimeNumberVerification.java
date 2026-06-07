package com.mycompany.primenumbers;

import java.util.Scanner;
public class PrimeNumbers {

    public static void main(String[] args) {
        int inputNumber = 1333323;
        boolean state = false;
        int i =0;
        System.out.println("We shall verify whether " + inputNumber + " is a prime number " );
        if (inputNumber < 2)
            System.out.println("The number isn't prime ");
        else {
            for (i=2;i<(inputNumber/2);i++)
                if (inputNumber % i == 0){
                    state = true;
                    break;}
        }
        if (state == true)
            System.out.println("The number isn't prime since it is a multiple of " + i );
        else
            System.out.println("The number is prime");
    }
}
