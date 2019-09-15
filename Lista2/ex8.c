#include <stdio.h>
#include <stdlib.h>

int main() {

int n, *vn;
int x;
int result=0;
int soma1 = 0, soma2=0;

scanf("%d", &n);
if(n>=1 && n<= 100000){

vn = malloc(n*sizeof(int));

for(int i=0;i<n;i++){
    scanf("%d",&x);
    *(vn + i) = x; 
    soma2 += x;
}
for(int i=0;i<n;i++){
    soma1 += *(vn + i);

    if(soma1 == soma2/2){
        result = i+1;
        break;
    }
}
printf("%d\n", result);

}

free(vn);

    return 0;
}