package tabuada;

import java.util.Scanner;

public class TabuadaAleatoria {
    public static void main(String[] args) {
        System.out.println("""
                Faça um programa que receba um número e, usando laços de repetição, calcule e mostre a tabuada desse 
                número.
                """);
        Scanner scanner = new Scanner(System.in);

        int numero;

        System.out.println("Digite um número: ");
        numero = scanner.nextInt();

        for(int i = 1; i <= 10; i++){
            int tabuada = numero * i;
            System.out.println(numero + " x " + i + " = " + tabuada);
        }

        scanner.close();
    }
}
