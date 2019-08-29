#include <stdio.h>

int main () {
int qtd=0, num=0;

while (scanf("%d", &num) !=EOF) {
    if(num>=0 && num<=10000000){
    qtd++;
    }
}
printf ("%d\n", qtd);
return 0;
}

