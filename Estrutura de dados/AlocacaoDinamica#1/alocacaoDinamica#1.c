/*
1) Fa�a um programa que leia um valor n e crie dinamicamente um vetor de n elementos e passe
esse vetor para uma fun��o que vai ler os elementos desse vetor. Depois, no programa principal, o
vetor preenchido deve ser impresso. Al�m disso, antes de finalizar o programa, deve-se liberar a
�rea de mem�ria alocada.
*/

int* preencherVetor(int *vet,  int n){
    int i;

    for( i = 0 ; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", vet+i);
        printf("\n");
    }
}

void mostrarVetor( int *vet, int n){
    int i;

    for( i = 0 ; i < n; i++){
        printf("- %d - ", *(vet+i));
    }
}

main(){
    int n;

    printf("Digite um tamanho para o vetor:\n");
    scanf("%d", &n);

    int* vet = malloc(n * sizeof(int));

    preencherVetor(vet,n);

    mostrarVetor(vet,n);

}
