#include <stdio.h>

int main(){

int anoN, mesN, diaN, anoA, mesA, diaA;
int diasAsomados, diasNsomados;
int ai,mi,di;
int anoIdade, mesIdade, diaIdade;

scanf("%02d %02d %04d",&diaN, &mesN, &anoN);
scanf("%02d %02d %04d",&diaA, &mesA, &anoA);

diasAsomados = diaA + mesA*31 + anoA*372;
diasNsomados = diaN + mesN*31 + anoN*372;

if(diaN<=35 && diaN>=1 && mesN<=15 && mesN>=1 && anoN<=9999 && anoN>=0 &&
   diaA<=35 && diaA>=1 && mesA<=15 && mesA>=1 && anoA<=9999 && anoN>=0) {

       if(diaN>31 || mesN>12 || diaA>31 || mesA>12){
           printf("data invalida\n");
       }
       else {
        ai = diasAsomados-diasNsomados;
        anoIdade = ai/372;
        mi = ai%372;
        mesIdade = mi/31;
        diaIdade = mi%31;
        printf("%d\n",anoIdade);
        printf("%d\n",mesIdade);
        printf("%d\n",diaIdade);
       }
   }
    return 0;
}
