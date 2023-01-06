package tabuada;

import java.util.Scanner;

public class TabuadaUmDez {
    public static void main(String[] args) {
        System.out.println("""
                Faça um programa que mostre as tabuadas dos números de 1 a 10 usando laços de repetição.
                """);

        Scanner scanner = new Scanner(System.in);

        int n;
        int tabuada = 0;

        for(int i = 1; i <= 10; i++){
            for(n = 1; n <= 10; n++){
                tabuada = i * n;
                System.out.println(i + " x " + n + " = " + tabuada);
            }
            System.out.println("");
        }

        scanner.close();
    }
}
