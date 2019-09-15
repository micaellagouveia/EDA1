#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int n, acertos=0;
    char *gabarito, *resposta;


    scanf("%d", &n);
    gabarito = malloc(n*sizeof(char));
    resposta = malloc(n*sizeof(char));
    for(int i=0; i<n; i++) {
        scanf(" %c", (gabarito+i));
        if(*(gabarito+i) != toupper(*(gabarito+i))){
            printf("Digite apenas letras em caixa alta.\n");
            return 0;
        }
    }

    for(int i=0; i<n; i++) {
        scanf(" %c", (resposta+i));
        if(*(resposta+i) != toupper(*(resposta+i))){
             printf("Digite apenas letras em caixa alta.\n");
            return 0;
        }
    }

    for(int i=0; i<n; i++) {
        if(*(gabarito + i) == *(resposta + i)){
            acertos++;
        }
    }

    printf("%d\n", acertos);

    free(gabarito);
    free(resposta);

    return 0;
}
