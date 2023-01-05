package tabuada;

import java.util.Scanner;

public class TabuadaAleatoria {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numero;

        System.out.println("Digite um número: ");
        numero = scanner.nextInt();

        for(int i = 1; i <= 10; i++){
            int tabuada = numero * i;
            System.out.println(numero + " x " + i + " = " + tabuada);
        }
    }
}
