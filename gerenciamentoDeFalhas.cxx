

#include "gerenciamentoDeFalhasClasse.h"

gerenciamentoDeFalhas::gerenciamentoDeFalhas( double velocidadeMaxima,
                                              double gastoDeFuel,
                                              double perdaDeOleo,
                                              double consumoDeBateria,
                                              double consumoDePressao
                                            ) : computadorDeBordo ( velocidadeMaxima,
                                                                    gastoDeFuel,
                                                                    perdaDeOleo,
                                                                    consumoDeBateria,
                                                                    consumoDePressao
                                                                  ) {
    
}

double gerenciamentoDeFalhas::getFuel () {
    // 150 litros max
    double fuel = gastarFuel();
    // carro faz 10 km/L na cidade; 14 km/L na estrada
    return fuel >= 50 ? fuel : 0;  
}

double gerenciamentoDeFalhas::getNiveldeOleo () {
    
    double oleo = perderOleo();
    
    return oleo >= 90 ? oleo : 0;  
}

double gerenciamentoDeFalhas::getCargaDeBateria () {
    
    double amperagem = consomeBateria();
    
    return amperagem >= 50 ? amperagem : 0;
}

double gerenciamentoDeFalhas::getPressaoDosPneus () {
    
    double pressao = consomePressao();
    
    return pressao >= 28 ? pressao : 0;
}
