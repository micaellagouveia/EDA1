#include <stdio.h>

int main(){

int n,i,j=1,space=0;
int a,b;

scanf("%d",&n);
space = n - 1;

if(n>=1 && n<=1000000) {
    for(i=1; i<=n; i++){
        a = j;
        b = space;
        while(b--){
            printf(" ");   
        }
        while(a--){
            printf("*");
        }
        j = i*2 + 1;
        space--;
        printf("\n");
    }
}

return 0;
}