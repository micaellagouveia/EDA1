#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipoBanda {
    char nome[80]; //nome da banda
    int ano; // ano da apresentação
};
struct tipoShow {
    char nome[80]; //nome do evento
    int qtd; // qt de bandas no evento
    struct tipoBanda bandas[100];//lista de bandas no evento
};


void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50],int n){
int possui=0;
for(int i=0;i<n;i++){
    for(int j=0;j<shows[i].qtd;j++){
        if(strcmp(pesquisa,shows[i].bandas[j].nome)==0){
            possui = 1; 
            printf("%s - ano %d\n",shows[i].nome, shows[i].bandas[j].ano);
            break;        
        }
    }  
}
if(!possui){
    printf("Banda nao cadastrada\n");
}
}