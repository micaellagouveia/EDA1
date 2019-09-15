#include <stdio.h>
#include <stdlib.h>

int main() {

int p, cont=0, iChar, iChar2;
char *palavra;
char a='O';

int contador (char *palavra){
    int cont = 0;
    int i=0;

    while(*(palavra+i) != '\0'){
        i++;
        cont++;
    }
    return cont;
}

int transformaMaiusculo (int i){
    if(i>96){
        i = i-32;
    }
    return i;
}
scanf("%d", &p);

palavra = malloc(1000*p*sizeof(char));
for(int i=0;i<p;i++){

    scanf("%s", palavra);
    cont = contador(palavra);

    for(int i=0;i<cont-1;i++){
      iChar = transformaMaiusculo(*(palavra+i));
      iChar2 = transformaMaiusculo(*(palavra+i+1));
        if(iChar >= iChar2){
            a = 'N';
            break;
        }
        else {
            a = 'O';
        }
    }
    printf("%s: %c\n",palavra, a);
}

free(palavra);

    return 0;
}