/*  Este programa foi desenvolvido por Luis A. G. Dos Santos 
*   em Faculdade de Tecnologia da UNICAMP.
*   Nome: LUIS AUGUSTO GOMES DOS SANTOS
*   RA: 256647
*   Professor: Varese Salvador Timóteo
*   Disciplina: Programação Orientada A Objetos I
*************************************************************
*   Adicionar mais funções...
*/ 

class gerenciamentoDeFalhas : public computadorDeBordo {
    
    public:
        
        gerenciamentoDeFalhas( double velocidadeMaxima,
                               double gastoDeFuel,
                               double perdaDeOleo,
                               double consumoDeBateria,
                               double consumoDePressao );
        
        double getFuel();
        double getNiveldeOleo();
        double getCargaDeBateria();
        double getPressaoDosPneus();
};


