/*

Implemente a fun��o ultimo_nome que recebe como par�metro uma cadeia de caracteres com o nome completo de
uma pessoa e retorna um ponteiro (o endere�o inicial) do �ltimo nome encontrado.

Sua fun��o deve obedecer o seguinte prot�tipo:
char* ultimo_nome(char *nome_completo);

Aten��o: voc� n�o pode criar novas cadeias de caracteres dentro da fun��o (est�ticas ou din�micas).

Exemplos:


Para "Rafael de Moura Machado" a sua fun��o deve retornar um ponteiro para "Machado";
Para "Jose Silva" a sua fun��o deve retornar um ponteiro para "Silva";
Para "ZeNinguem" a sua fun��o deve retornar um ponteiro para "ZeNinguem".

Considere que h� apenas um espa�o entre os nomes e que ap�s o �ltimo nome n�o h� espa�os.

Implemente tamb�m a fun��o verificaSobrenome, que recebe duas cadeias com os nomes completos de duas pessoas, e,
utilizando a fun��o ultimo_nome, verifica se essas duas pessoas t�m o mesmo sobrenome (isto �, o mesmo �ltimo nome).
Em caso positivo, a fun��o deve retornar uma nova cadeia alocada dinamicamente com esse sobrenome. Em qualquer outro caso,
a fun��o deve retornar uma cadeia vazia. Havendo problema de aloca��o de mem�ria, a fun��o deve retornar NULL.


Para simplificar ainda mais, sempre que poss�vel utilize as fun��es da biblioteca string.h:

int strlen (char* s);
int strcmp (char* s, char *t);
har* strcpy (char* destino, char* fonte);
char* strncpy (char* destino, char* fonte, int n);
char* strcat (char* destino, char* fonte);

Exemplos de nomes:


Para �STEVEN PAUL JOBS� e �JOSE JOBS�, retorna �JOBS�;
Para �JOSE JOBS� e �CHICO ANYSIO�, retorna cadeia vazia ��;
Para �SILVA� e �SILVA�, retorna �SILVA�;
Para �� e ��, retorna cadeia vazia ��;

Em seguida, crie a fun��o principal do programa e utilize a fun��o verificaSobrenome
para verificar se os sobrenomes de dois nomes informados pelo usu�rio s�o iguais ou n�o.
Use os exemplos acima para testar o seu programa.


*/

#include<string.h>


char* ultimo_nome(char* nomeCompleto){
    int ultimoEspaco;
    int i;

    for(i = 0 ; *(nomeCompleto + i) != '\0';i++ ){
        if(*(nomeCompleto + i) == ' '){
            ultimoEspaco = i;
        }
    }


    return nomeCompleto + (ultimoEspaco + 1);

}


char* verificaSobrenome(char* nomeCompleto1, char* nomeCompleto2){
    char* retorno = malloc(50* sizeof(char));
    char* vazia = malloc(50* sizeof(char));

    nomeCompleto1 = ultimo_nome(nomeCompleto1);
    nomeCompleto2 = ultimo_nome(nomeCompleto2);

    int i;


    for(i = 0 ; *(nomeCompleto1 + i) != '\0';i++ ){
        if(*(nomeCompleto1 + i) != *(nomeCompleto2 + i)){
            return vazia;
        }else{
            *(retorno + i) = *(nomeCompleto1 + i);
        }
    }


    return retorno;


}

main(){

    char* nomeCompleto1 = malloc(50 * sizeof(char));
    char* nomeCompleto2 = malloc(50 * sizeof(char));

    char * ultimoNome = malloc(50 * sizeof(char));

    strcpy(nomeCompleto1, "Vinicius dos Santos");
    strcpy(nomeCompleto2, "Janio dos Santos");

    ultimoNome = verificaSobrenome(nomeCompleto1, nomeCompleto2);

    printf("%s", ultimoNome);

}
