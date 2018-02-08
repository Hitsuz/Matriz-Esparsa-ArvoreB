#include <stdio.h>
#include <stdlib.h>


/*** Definição da estrutura dos nos da Matriz ***/
typedef struct no {
    int numLinha;
    int numColuna;
    int conteudo;

} no;


void insereLinha();

void insereColuna();

void insereElemento(int conteudo, int posL, int posC);

void insereasdsa();

no *aloca(int l, int c);

int main() {
    printf("Hello, World! teste\n");
    return 0;
}


no *aloca(int l, int c) {
    no *elementoNovo;
    elementoNovo = (no *) calloc(1, sizeof(no));
    elementoNovo->numColuna = c;
    elementoNovo->numLinha = l;
    return elementoNovo;
}

void insereElemento(int conteudo, int posL, int posC) {


}