#include <stdio.h>
//questao 02
typedef struct{
    char rua[25], nro[7],bairro[25]
    ,cidade[25],estado[20];
}END;

typedef struct{
    char nome[40];
    int idade;
    END endereco;
}PESSOA;

void cadEND(PESSOA *p){
    printf("Rua: ");
    setbuf(stdin,NULL);
    gets(p->endereco.rua);
    printf("Numero: ");
    setbuf(stdin,NULL);
    gets(p->endereco.nro);
    printf("Bairro: ");
    setbuf(stdin,NULL);
    gets(p->endereco.bairro);
    printf("Cidade: ");
    setbuf(stdin,NULL);
    gets(p->endereco.cidade);
    printf("Estado: ");
    setbuf(stdin,NULL);
    gets(p->endereco.estado);
}
void cadastrarPessoa(PESSOA *p){
    setbuf(stdin,NULL);
    printf("Nome: ");
    gets(p->nome);
    printf("Idade: ");
    scanf("%d",&p->idade);
    cadEND(p);
}
void mostrarPessoa(PESSOA p){
    printf("\nNome: %s",p.nome);
    printf("\nIdade: %d",p.idade);
    printf("\nRua %s, %s",p.endereco.rua,p.endereco.nro);
    printf("\nBairro: %s - %s - %s\n",p.endereco.bairro,
           p.endereco.cidade, p.endereco.estado);
}
main(){
    PESSOA p1, p2;
    cadastrarPessoa(&p1);
    mostrarPessoa(p1);
}
