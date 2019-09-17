#include <stdio.h>

int Hanoi(int n, long long int cont) {
    if (n == 1) {
        return ++cont;
    }
    else {
        cont = 2*Hanoi(n-1,cont)+1;
    }
    return cont;
}

int main() {
    int n = 1, i = 0;

    while (n) {
        scanf("%d", &n);
        if (n<=0 || n>30) {
            return 0;
        }
        i++;
        long long int cont = Hanoi(n, 0);
        printf("Teste %d\n%lld\n",i,cont);
    }

    return 0;
}