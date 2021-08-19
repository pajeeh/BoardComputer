/*  
*   Adicionar mais funções...
*/  
#include "computadorDeclaracaoClasse.h"

computadorDeBordo::computadorDeBordo( double velocidadeMaxima,
                                      double gastoDeFuel,
                                      double perdaDeOleo,
                                      double consumoDeBateria,
                                      double consumoDePressao ) {
    velocidade = 0;
    limite = velocidadeMaxima;
    fuel = 57; //modelo CRV 2021
    perdeFuel = gastoDeFuel;
    oleo = 100;
    perdaOleo = perdaDeOleo;
    perdaDeCargaBateria = consumoDeBateria;
    amperagem = 60;
    perdaDePressao = consumoDePressao;
    pressao = 32;
}

double computadorDeBordo::acelerar() {
    
    if ( velocidade < limite ) {
        velocidade += 10;
    }
    
    return velocidade;
}

double computadorDeBordo::gastarFuel() {
    
    if ( fuel > 0 ) {
        fuel -= perdeFuel;
    }
    
    return fuel;
}

double computadorDeBordo::perderOleo() {
    
    if ( oleo > 0 ) {
        oleo -= perdaOleo;
    }
    
    return oleo;
}

double computadorDeBordo::consomeBateria() {
    
    if ( amperagem > 0 ) {
        amperagem -= perdaDeCargaBateria;
    }
    
    return amperagem;
}

double computadorDeBordo::consomePressao() {
    
    if ( pressao > 0 ) {
        pressao -= perdaDePressao;
    }
    
    return pressao;
}
