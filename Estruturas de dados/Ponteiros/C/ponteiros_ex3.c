/*

3)Escreva uma fun��o mm que receba um vetor inteiro v[0..n-1] e os endere�osde duas vari�veis inteiras,
 digamos min e max, e deposite nessas vari�veis ovalor de um elemento m�nimo e o valor de um elemento
  m�ximo do vetor. Escreva tamb�m uma fun��o main que use a fun��o mm.

*/

const int MAX = 20000000;

void minimax(int vet[], int *min , int * max)
{
    int i, vMin = MAX, vMax = 0;

    for (i = 0 ; i < 5; i++ ){
        if(vet[i] < vMin){
            vMin = vet[i];
        }
        if(vet[i] > vMax){
            vMax = vet[i];
        }
    }

    *min = vMin;
    *max = vMax;
}


main(){
    int vet[5] = {5,3,7,9,2};
    int min = 0, max = 0;

    minimax(vet,&min, &max);

    printf("min = %d - max = %d", min, max);


}
