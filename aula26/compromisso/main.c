#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "pilha.h"

void novoContato(CONTATO *c){
    printf("DIGITE O NOME DO CONTATO: ");
    setbuf(stdin,NULL);
    gets(c->nome);
    strupr(c->nome);
    printf("DIGITE O TELEFONE (XX)XXXXX-XXXX: ");
    setbuf(stdin,NULL);
    gets(c->telefone);
}

int menu(){
    int op;
    printf("\n0 - SAIR\n");
    printf("1 - MOSTRAR LISTA DE CONTATOS\n");
    printf("2 - INSERIR\n");
    printf("3 - REMOVER CONTATO\n");
    printf("4 - BUSCAR\n");
    printf("5 - APAGAR ARQUIVO\n");
    printf("6 - CRIAR COMPROMISSO\n");
    printf("\nOPCAO: ");
    scanf("%d",&op);
    putchar('\n');
    system("cls");
    return op;
}
main(){
    int o, pos;
    char nome[31];
    LISTA *li = criar();
    PILHA *pi = criar();
    CONTATO c;
    FILE *arq, *arqPilha;
    while((o=menu())!=0){
        esvaziar(li);
        switch(o){
        case 0:
            break;
        case 1:
            arq = arquivo("rb");
            if(push(li,arq))
                mostrar(li);
            fclose(arq);

            break;
       case 2:
            arq = arquivo("rb");
            push(li,arq);
            fclose(arq);
            novoContato(&c);
            inserir(li,c);
            arq = arquivo("w+b");
            gravarLista(arq,li);
            fclose(arq);
            break;
        case 3:
            arq = arquivo("rb");
            if(push(li,arq))
                mostrar(li);
            fclose(arq);
            if(tamanho(li)){
                printf("DIGITE O CODIGO DO CONTATO QUE SERA REMOVIDO >> ");
                scanf("%d",&pos);
                remover(li,pos);
                arq = arquivo("w+b");
                gravarLista(arq,li);
                fclose(arq);
            }
            break;
        case 4:
            arq=arquivo("rb");
            push(li,arq);
            fclose(arq);
            printf("DIGITE O NOME DO CONTATO: ");
            setbuf(stdin,NULL);
            gets(nome);
            strupr(nome);
            ELEM *e=buscar(li,nome);
            if(e!=NULL){
                printf("%s\t",e->dados.nome);
                printf("%s\n",e->dados.telefone);
            }else{
                printf("CONTATO NAO ENCONTRADO\n");
            }
            break;
        case 5:
            arq = arquivo("w+b");
            fclose(arq);
            break;
        case 6:
            arq=arquivo("rb");
            push(li,arq);
            fclose(arq);
            printf("DIGITE O NOME DO CONTATO: ");
            setbuf(stdin,NULL);
            gets(nome);
            strupr(nome);
            ELEM *e=buscar(li,nome);
            inserirPilha(pi, li, e);
            arq = arquivo("w+b");
            gravarLista(arq,li);
            arqPilha = arquivo()
            fclose(arq);
            break;
        default:
            printf("OPCAO INVALIDA\n\n");
        }
    }
    liberar(li);
}
