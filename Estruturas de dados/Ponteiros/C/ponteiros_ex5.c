#include <stdio.h>
/*

5)Escreva uma fun��o chamada troca que troca os valores dos par�metros recebidos.
Sua assinatura deve ser:void troca(float *a, float *b);

*/

void troca(float *a, float *b){
    float aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}


void main (){
    float a = 5, b = 3;
    troca(&a, &b);
    printf("a : %f - b: %f", a , b );

}


