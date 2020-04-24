/*

2) Fa�a uma fun��o que receba um valor n e crie dinamicamente um vetor de n elementos e
retorne um ponteiro.

Crie uma fun��o que receba um ponteiro para um vetor e um valor n e imprima os n elementos desse vetor.

Construa tamb�m uma fun��o que receba um ponteiro para um vetor e libere esta �rea de mem�ria.

Ao final, crie uma fun��o principal que leia um valor n e chame a fun��o criada acima.

Depois, a fun��o principal deve ler os n elementos desse vetor.

Ent�o, a fun��o principal deve chamar a fun��o de impress�o dos n elementos do vetor criado e, finalmente, liberar
a mem�ria alocada atrav�s da fun��o criada para libera��o.


*/

int* criarVetor(int n){
    int *vet = malloc(n * sizeof(int));
    return vet;
}

void mostrarVetor(int* vet, int n){
    int i;

    for(i = 0 ; i < n ; i++){
        printf("-%d-", *(vet + i));
    }

}

void liberarVetor(int* vet){

    free(vet);

}




main(){
    int *vet = criarVetor(10);
    int i;

    for(i = 0 ; i < 10 ; i++){
        printf("Digite um numero: ");
        scanf("%d", vet + i);
    }

    mostrarVetor(vet,10);

    liberarVetor(vet);

}
