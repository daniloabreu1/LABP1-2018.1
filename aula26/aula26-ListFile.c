#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char nome[31];
    char telefone[18];
}CONTATO;

typedef struct elemento{
    CONTATO dados;
    struct elemento *prox;
} ELEM;
typedef struct{
    ELEM *inicio;
}LISTA;

LISTA* criar(){
    LISTA* li = (LISTA*) malloc(sizeof(LISTA));
    if(li != NULL) {
        li->inicio= NULL;
    }
    return li;
}

void liberar(LISTA *li){
    if(li !=NULL){
        ELEM * aux;
        while(li->inicio!=NULL){
            aux = li->inicio;
            li->inicio = li->inicio->prox;
            free(aux);
        }
        free(li);
    }
}
void esvaziar(LISTA *li){
    if(li !=NULL){
        ELEM * aux;
        while(li->inicio!=NULL){
            aux = li->inicio;
            li->inicio = li->inicio->prox;
            free(aux);
        }
    }
}

int tamanho(LISTA *li){
    if(li==NULL){
        return -1;
    }
    int cont=0;
    ELEM *aux = li->inicio;
    while(aux != NULL){
        cont++;
        aux= aux->prox;
    }
    return cont;
}
int diferente(LISTA *li,char *nome){
    int n=1;
    ELEM *aux=li->inicio;
    if(aux!=NULL){
        while(aux!=NULL){
                if(strcmp(aux->dados.nome,nome)==0){
                    n=0;
                    break;
                }
                aux=aux->prox;
        }
    }
    return n;
}
void inserir(LISTA *li, CONTATO c){
    if(li==NULL){
        return;
    }else{
        if(diferente(li,c.nome)){
            ELEM *novo = (ELEM*) malloc(sizeof(ELEM));
            if(novo != NULL){
                novo->dados= c;
                if(li->inicio==NULL){
                    novo->prox=NULL;
                    li->inicio=novo;
                }else{
                    if(strcmp(li->inicio->dados.nome,novo->dados.nome)>0){
                        novo->prox=li->inicio;
                        li->inicio=novo;
                    }else{
                        ELEM *ant,*aux=li->inicio;
                        while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0)){
                            ant=aux;
                            aux=aux->prox;
                        }
                        ant->prox=novo;
                        novo->prox=aux;
                    }
                }
            }else{
                printf("\nERRO DE ALOCACAO\n");
            }
        }else{
            printf("\nCONTATO JA EXISTENTE\n");
        }
    }
}

void remover(LISTA *li, int pos){
    if(li==NULL){
        printf("\nERRO DE ALOCACAO\n");
    }else{
        if(li->inicio==NULL){
            printf("\nLISTA VAZIA\n");
        }else{
            ELEM *aux=li->inicio;
            int cont=1;
            if(cont==pos){
                li->inicio=aux->prox;
                free(aux);
            }else{
                ELEM *ant;
                while((aux!=NULL)&&(cont != pos)){
                    ant=aux;
                    aux=aux->prox;
                    cont++;
                }
                if(aux==NULL){
                    return;
                }
                ant->prox = aux->prox;
                free(aux);
            }
            printf("\nELEMENTO REMOVIDO\n");
        }
    }
}

void mostrar(LISTA *li){
    if(li == NULL){
        printf("\nERRO DE ALOCACAO\n");
    }else{
        if(li->inicio==NULL){
            printf("\nLISTA VAZIA\n");
        }else{
            int cont=0;
            ELEM* aux = li->inicio;
            printf("#\tNOME\t\tTELEFONE\n");
            while(aux != NULL){
                cont++;
                printf("%d\t%s\t\t",cont,aux->dados.nome);
                printf("%s\n",aux->dados.telefone);
                aux = aux->prox;
            }
        }
    }
}

int push(LISTA *li, FILE *arq){
    if(arq!=NULL){
        CONTATO c;
        while(fread(&c,sizeof(CONTATO),1,arq)){
            inserir(li,c);
        }
        return 1;
    }
    return 0;
}

void gravarLista(FILE *arq, LISTA *li){
    if(arq!=NULL){
            ELEM* aux = li->inicio;
             while(aux != NULL){
                 fwrite(&aux->dados, sizeof(CONTATO),1,arq);
                 aux = aux->prox;
            }
    }

}
FILE *arquivo(char *s){
    return fopen("dados.dat",s);
}

void novoContato(CONTATO *c){
    printf("DIGITE O NOME DO CONTATO: ");
    setbuf(stdin,NULL);
    gets(c->nome);
    strupr(c->nome);
    printf("DIGITE O TELEFONE (XX)XXXXX-XXXX: ");
    setbuf(stdin,NULL);
    gets(c->telefone);

}
ELEM* buscar(LISTA *li,char *s){
    ELEM *aux=li->inicio;
    if(aux != NULL){
        while((aux!=NULL)&&(strcmp(aux->dados.nome,s)!=0)){
             aux=aux->prox;
        }
    }
    return aux;
}

int menu(){
    int op;
    printf("\n0 - SAIR\n");
    printf("1 - MOSTRAR LISTA DE CONTATOS\n");
    printf("2 - INSERIR\n");
    printf("3 - REMOVER CONTATO\n");
    printf("4 - BUSCAR\n");
    printf("5 - APAGAR ARQUIVO\n");
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
    CONTATO c;
    FILE *arq;
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
        default:
            printf("OPCAO INVALIDA\n\n");
        }
    }
    liberar(li);
}
