/*  
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
