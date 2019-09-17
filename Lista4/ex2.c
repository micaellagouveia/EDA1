#include <stdio.h>

int f91(int n) {

    if (n <= 100) {
        return f91(f91(n + 11));
    }
    else {
        return n - 10;
    }
}

int main() {

    int n = 1;
    int result;

    while (n) {
        scanf("%d", &n);
        if (!n) {
            return 0;
        }
        result = f91(n);
        printf("f91(%d) = %d\n", n, result);
    }
    return 0;
}