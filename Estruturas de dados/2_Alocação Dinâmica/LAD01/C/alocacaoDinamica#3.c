/*

3) Construa um programa (main) que aloque em tempo de execu��o (dinamicamente) uma matriz de ordem m x n (linha por coluna).

Agora, aproveite este programa para construir uma fun��o que recebendo os parametros m e n aloque uma matriz
de ordem m x n e retorne um ponteiro para esta matriz alocada.

Crie ainda uma fun��o para liberar a �rea de mem�ria alocada pela matriz. Finalmente, crie um novo programa
(main) que teste/use as duas fun��es criadas acima.


*/

int** alocarMatriz(int Linhas,int Colunas){

  int i,j;

  int **m = (int**)malloc(Linhas * sizeof(int*));

  for (i = 0; i < Linhas; i++){
       m[i] = (int*) malloc(Colunas * sizeof(int));
       for (j = 0; j < Colunas; j++){
            m[i][j] = 0;
       }
  }
return m;
}

main(){

}
