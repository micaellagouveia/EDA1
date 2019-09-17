#include <stdio.h>
#include <stdlib.h>

void print(int *n, int pos) {
    if (pos == 0) {
        return;
    }
    printf("%d\n", *(n +pos - 1));
    print(n, pos - 1);
}
int main () {

int *n,lim, soma=0;
int pos=0;
int j=0;

n = malloc(1000*sizeof(int));

scanf("%d",n+0);
while(*(n+j) != 0){
    j++;
    scanf("%d",(n+j));  
}
scanf("%d",&lim);

for(int i=0;i<j;i++){
    soma += *(n+i);
    if(soma > lim){
        *(n+pos) = *(n+i);
        pos++;
        soma = 0;
    }
}
print(n,pos);
free(n);

    return 0;
}
