typedef struct {
    char nome[31];
    char telefone[18];
}CONTATO;

typedef struct{
    CONTATO c;
    char detalhe[50];
}COMPROMISSO;
typedef struct elemento{
    COMPROMISSO dados;
    struct elemento *prox;
}ELEM;
typedef struct{
    ELEM *topo;
}PILHA;
PILHA* criar();
void inserirPilha(PILHA *pi, LISTA *li, ELEM *e);
void mostrarPilha(PILHA *pi);
void liberarPilha(PILHA *pi);
void gravarPilha(FILE *arq, PILHA *pi)
