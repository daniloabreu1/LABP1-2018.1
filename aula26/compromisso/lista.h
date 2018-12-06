typedef struct {
    char nome[31];
    char telefone[18];
}CONTATO;
typedef struct elemento{
    CONTATO dados;
    struct elemento *prox;
}ELEM;
typedef struct{
    ELEM *inicio;
}LISTA;
LISTA* criarLista();
void liberarLista(LISTA *li);
int tamanhoLista(LISTA *li);
void esvaziar(LISTA *li);
void inserir(LISTA *li, CONTATO c);
void remover(LISTA *li, int pos);
void mostrar(LISTA *li);
int diferente(LISTA *li,char *nome);
int push(LISTA *li, FILE *arq);
void gravarLista(FILE *arq, LISTA *li);
FILE *arquivo(char *s);
ELEM* buscar(LISTA *li,char *s);
