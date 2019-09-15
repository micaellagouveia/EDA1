#include <stdio.h>
#include <stdlib.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{

    double media;
    double hA, hB;

    hA = tA / 3600.0;
    hB = tB / 3600.0;

    media = distancia / (hB - hA);

    return media;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {
    
    double media;
    
    media = calculaVelocidadeMedia(tA, tB, distancia);

    if (media <= velocidadeMaxima)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
