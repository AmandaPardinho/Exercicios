/*

1) Implemente um programa que contenha a fun��o inverte.
Essa fun��o recebe como par�metro uma cadeia de caracteres e retorna uma nova cadeia,
que corresponde � cadeia original, lida de tr�s para frente (a cadeia passada como par�metro n�o pode ser alterada).
Por exemplo, recebendo como par�metro a cadeia "Aluno", essa fun��o retornaria a cadeia "onulA". Sua fun��o deve ter
o seguinte prot�tipo:

char *inverte(char cadeia[]);

Em seguida, escreva a fun��o principal do programa e utilize a fun��o inverte
para inverter uma cadeia de caracteres informada pelo usu�rio.

*/

#include<stdio.h>
#include<malloc.h>


void inverte(char cadeia[], char retorno[]){
    int tamanho = 0, i,j;

    for(i = 0 ; cadeia[i] != '\0' ; i++){
        tamanho++;
    }

    for(i = tamanho - 1 ,j = 0; i >= 0 ; i--,j++){
         retorno[j] = cadeia[i];
    }
    return retorno;
}


int main(){
    char cadeia[5] = {'v','i','n','i','\0'};
    char retorno[5];

    inverte(cadeia, retorno);
    int i;
    for(i = 0  ; retorno[i]!= '\0'; i++){
        printf("%c", retorno[i]);
    }
}
