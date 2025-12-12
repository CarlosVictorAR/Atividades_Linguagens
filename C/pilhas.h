#ifndef PILHAS_H_INCLUDED
#define PILHAS_H_INCLUDED
typedef struct{
    int dia,mes,ano;
}Data;
typedef struct{
    char nome[50];
    Data data;
}Pessoa;
typedef struct no{
    Pessoa pessoa;
    struct no *proximo;
}No;
Pessoa ler_pessoa();
void adicionar(No **topo);
void remover(No **topo);
void print_top(No *topo);

void print_stack(No *topo);
#endif 



