#include <stdio.h>

int main() {

int consumo;
int valor=7;
int preco;

scanf("%d",&consumo);

if(consumo>=0 && consumo<=1000) {

    if(consumo>10 && consumo<=30){
        preco = (consumo - 10);
        valor += preco;
    }
    if(consumo>30 && consumo<=100){
        preco = (consumo - 30)*2;
        valor = 27 + preco;
    }
    if(consumo>100){
        preco = (consumo - 100)*5;
        valor = 7 + 20 + 140 + preco;
    }
     printf("%d\n", valor);
}
    return 0;
}