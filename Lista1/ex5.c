#include <stdio.h>

int main() {

int qt,i,j;

scanf("%d", &qt);

if(qt>=1 && qt<100){
    for(i=1; i<=qt; i++) {
        for(j=1; j<=i; j++) {
            printf("%02d",i);
            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(i=1; i<=qt; i++) {
        for(j=1; j<=i; j++) {
            printf("%02d",j);
            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
}
    return 0;
}