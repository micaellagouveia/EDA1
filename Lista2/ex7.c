#include <stdio.h>
#include <stdlib.h>

int main() {

int n, k,x;
int *freq;

scanf("%d %d", &n, &k);

freq = malloc((k+1)*sizeof(int));

for(int i=0;i<=k;i++){
    *(freq + i)=0;
}

for(int i=1;i<=n;i++){
    scanf("%d",&x);
    *(freq + x)+=1;
}

int qt= freq[1];

for(int i=1;i<=k;i++){
    if(qt > *(freq + i)){
        qt = *(freq + i);
    }
}

printf("%d\n",qt);
free(freq);
    return 0;
}