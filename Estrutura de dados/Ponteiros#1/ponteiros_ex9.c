#include <stdio.h>
/*

9) Qual o resultado d o c�digo abaixo? Explique cada linha.

*/


main (){

   int x = 100; // declara��o de x e atribui��o do valor 100;
   int *p ,**pp; //declara��o de duas vari�veis, ponteiro de inteiro. Tamb�m outro ponteiro de ponteiro de inteiro.
   p = &x; // ponteiro p recebe endere�o de x;
   pp = &p; // ponteiro de ponteiro de inteiro pp recebe o endere�o de p
   printf("Valor de pp: %d\n", **pp); // agora imprimimos o valor de pp desreferenciado

}
