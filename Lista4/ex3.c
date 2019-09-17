#include <stdio.h>
#include <stdlib.h>

int deg9(int soma){
    if (soma == 9) {
        return 1;
    }
    if (soma % 9 == 0) {
        int x = 0;
        while (soma > 0) {
            x += soma % 10;
            soma /= 10;
        }
        return 1 + deg9(x);
    }
    else{
        return 0;
    }
}

int main(void)
{
    int i = 0, soma=0;
    char *n;
    n = malloc(1001*sizeof(int));

    do{
        scanf("%s", n);
        if (*n == '0'){
            return 0;
        }
            
        while(*(n+i) != '\0') {
            soma += *(n+i) - '0';
            i++;
        }
        if(deg9(soma)){
            printf("%s is a multiple of 9 and has 9-degree %d.\n",n,deg9(soma));
        }
        else{
            printf("%s is not a multiple of 9.\n",n);
        }
        soma =0;
        i = 0;

    } while (*n != '0');

    free(n);

    return 0;
}  