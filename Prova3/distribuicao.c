#include<stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct celula{
  int val;
  struct celula *prox;
}celula;

celula *fila[10];

int digito(int n, int d){
    int t1 = pow(10, d);
    int t2 = 10*t1;
    return (n%t2)/t1;
}

int cria_fila(){
  for (int i = 0; i < 10; ++i){
    fila[i] = malloc(sizeof(celula));
    if(fila[i] == NULL) return 0;
    fila[i]->prox = fila[i];
  }
  return 1;  
}

int desenfileira(int *val, int i){  
  if(fila[i]->prox == fila[i]) return 0;
  celula *lixo = fila[i]->prox;
  *val = lixo->val;
  fila[i]->prox = lixo->prox;
  free(lixo);
  return 1;
}

int enfileira(int x, int i){
  celula *novo = malloc(sizeof(celula));
  if(novo == NULL) return 0;
  novo->prox = fila[i]->prox;
  fila[i]->prox = novo;
  fila[i]->val = x;
  fila[i] = novo;
  return 1;
}

// Busca ordenada crescente com números positivos
int bsort(int *vet, int n, int d){
  int i, j, k;
  cria_fila();
    for (i = 0; i < d; ++i){
      for (j = 0; j < n; ++j)
        enfileira(vet[j], digito(vet[j], i));
      for (j = 0, k = 0; k < 10; ++k)
        while(desenfileira(&vet[j], k)) j++;
    }
}

// Busca ordenada drescente com números positivos
int bsortDecrescente(int *vet, int n, int d){
  int i, j, k;
  cria_fila();
    for (i = 0; i < d; ++i){
      for (j = 0; j < n; ++j)
        enfileira(vet[j], digito(vet[j], i));
      for (j = 0, k = 9; k >= 0; --k)
        while(desenfileira(&vet[j], k)) j++;
    }
}

int main() {

    int *v = malloc(sizeof(int));
    int t = 6, l;

    for(int i = 0; i < t; i++){
        scanf("%d", &l);
        v[i] = l;
    }

    bsort(v, t, 5);

    for(int i = 0; i < t; i++){
        printf("%d ", v[i]);
    }

    printf("\n");

    bsortDecrescente(v, t, 5);

        for(int i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    
    return 0;
}