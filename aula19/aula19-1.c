#include <stdio.h>
#include <stdlib.h>
//questao 02
typedef struct{
    char rua[25], nro[7],bairro[25]
    ,cidade[25],estado[20];
}END;

typedef struct{
    char nome[40];
    int idade;
    float salario;
    END endereco;
}CAD;

void cadEND(CAD *p){
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
    putchar('\n');
}
void cadastrarPessoa(CAD *p){
    setbuf(stdin,NULL);
    printf("Nome: ");
    gets(p->nome);
    printf("Idade: ");
    scanf("%d",&p->idade);
    printf("Salario: ");
    scanf("%f",&p->salario);
    cadEND(p);
}
void mostrarPessoa(CAD p){
    printf("\nNome: %s",p.nome);
    printf("\nIdade: %d",p.idade);
    printf("\nValor do salario R$ %7.2f",p.salario);
    printf("\nRua %s, %s",p.endereco.rua,p.endereco.nro);
    printf("\nBairro: %s - %s - %s\n",p.endereco.bairro,
           p.endereco.cidade, p.endereco.estado);
}
CAD maisVelho(CAD *p,int n){
    int m =p->idade, i,e=0;
    for(i=0;i<n;i++){
        if(m < p[i].idade){
            m = p[i].idade;
            e = i;
        }
    }
    return p[e];
}
CAD *maisMil(CAD *p, int n, int *q){
    int i,d=0;
    CAD * v = (CAD*)malloc(sizeof(CAD));
    for(i=0;i<n;i++){
        if( p[i].salario>1000.00){
            (*q)++;
            v = (CAD*)realloc(v,sizeof(CAD)* *q);
            v[d]=p[i];
            d++;
        }
    }

    return v;
}
main(){
    int i,n=3,q=0;

    CAD *c = (CAD*)malloc(n*sizeof(CAD));

    for(i=0;i<n;i++){
        cadastrarPessoa(c+i);
    }

    for(i=0;i<n;i++){
        mostrarPessoa(c[i]);
    }
    CAD r=maisVelho(c,n);
    printf("\nPessoa mais velha: %s\n",r.nome);

    CAD *p = maisMil(c,n,&q);

    printf("Salarios maiores que 1000: %d",q);
    for(i=0;i<q;i++){
        mostrarPessoa(p[i]);
    }

}
