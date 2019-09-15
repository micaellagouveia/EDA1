#include <stdio.h>
#include <stdlib.h>

int contador(char *palavra){
    int cont = 0;
    int i = 0;

    while (*(palavra + i) != '\0') {
        i++;
        cont++;
    }
    return cont;
}

int compara(char *palavra, char *frase, int cont, int j){
int n=0,cont2=0;
    for(int i=j;i<cont+j;i++){
        if(*(palavra+n) == *(frase+i)){
            cont2++;
        }
        else{
            return 0;
        }
        if(cont2 == cont){
            return cont2;
        }
        n++;
    }
    printf("%d\n",cont2);
    return 0;
}

int main()
{

    char *frase, *palavra, *trocada;
    int t = 0, pos=0;
    int possui=0;

    frase = malloc(10000 * sizeof(char));
    palavra = malloc(40 * sizeof(char));
    trocada = malloc(40 * sizeof(char));

    scanf(" %[^\n]s", frase);
    scanf("%s", palavra);
    scanf("%s",trocada);

    int contFrase = contador(frase);
    int contPalavra = contador(palavra);
    int contTrocada = contador(trocada);

    for (int i = 0; i < contFrase; i++){
        int comp = compara(palavra, frase, contPalavra,i);
        if(!comp){
            printf("%c",*(frase+i));
        }
        else {
            printf("%s",trocada);
            i = i + contPalavra - 1; 
        }
    }

    printf("\n");

    free(frase);
    free(palavra);
    free(trocada);
    return 0;
}
