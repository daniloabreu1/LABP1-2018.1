#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "pilha.h"

void inserirPilha(PILHA *pi, LISTA *li, ELEM *e){

}
void mostrarPilha(PILHA *pi){

}
void liberarPilha(PILHA *pi){


}
void gravarPilha(FILE *arq, PILHA *pi){
    if(arq!=NULL){
            ELEM* aux = pi->topo;
             while(aux != NULL){
                 fwrite(&aux->dados, sizeof(COMPROMISSO),1,arq);
                 aux = aux->prox;
            }
    }
}
FILE *arquivoPilha(char *s){
    return fopen("comp.dat",s);
}
