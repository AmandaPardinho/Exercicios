/*

2) Escreva um programa que contenha a fun��o contaLetras, que:

Recebe: uma cadeia de caracteres (ou seja, um ponteiro para uma cadeia), e o endere�o de duas vari�veis onde devem devolvidas as respostas;
Retorna: (nas vari�veis cujos endere�os foram recebidos) dois valores: o n�mero de letras mai�sculas e o n�mero de letras min�sculas.

Em seguida, implemente a fun��o principal do programa que utilize a fun��o contaLetras para exibir na tela o
total de letras mai�sculas e o total de letras min�sculas existentes em uma cadeia de caracteres informada pelo usu�rio.

*/

int contaLetras(char cadeia[], int* maiusculas, int* minusculas){

    int qtdM = 0;
    int qtdm = 0;
    int i;

    for (int i = 0 ; i < 5; i++){
            printf("-%c-", cadeia[i]);
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z'){
            qtdm++;
        }
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z'){
            qtdM++;
        }
    }
    *maiusculas = qtdM;
    *minusculas = qtdm;
}


main(){
    int maiusculas;
    int minusculas;
    char cadeia[5] = {'V','i','N','i','c'};
    contaLetras(cadeia, &maiusculas, &minusculas);

    printf("Maiusculas: %d - Minusculas: %d", maiusculas, minusculas);
}
