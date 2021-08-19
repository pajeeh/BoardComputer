/*
***************************************************************
*   Este programa foi desenvolvido por Luis A. G. Dos Santos  *
*   em Faculdade de Tecnologia da UNICAMP.                    *
*   RA: 256647                                                *
*   Professor: Varese Salvador Timóteo                        *
*   Disciplina: Programação Orientada A Objetos I             *
***************************************************************
*  
*   Adicionar mais funções...
*/  

class computadorDeBordo {
    
    public:
        double velocidade;
        double velocidadeMaxima;
        double limite;
        double fuel; //nivel de combustível
        double perdeFuel; //quantidade de combustível gasta
        double oleo;
        double perdaOleo;
        double perdaDeCargaBateria;
        double amperagem; 
        double perdaDePressao;
        double pressao;

        computadorDeBordo( double velocidadeMaxima,
                           double gastoDeFuel,
                           double perdaDeOleo,
                           double consumoDeBateria,
                           double consumoDePressao );
                           
        double acelerar();
        double gastarFuel();
        double perderOleo();
        double consomeBateria();
        double consomePressao();
        
};
