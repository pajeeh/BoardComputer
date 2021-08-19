/*  Este programa foi desenvolvido por Luis A. G. Dos Santos 
*   em Faculdade de Tecnologia da UNICAMP.
*   Nome: LUIS AUGUSTO GOMES DOS SANTOS
*   RA: 256647
*   Professor: Varese Salvador Timóteo
*   Disciplina: Programação Orientada A Objetos I
*************************************************************
*   Adicionar mais funções...
*/ 

class gerenciamentoDeDesempenho : public computadorDeBordo {
    
    public:
        
        gerenciamentoDeDesempenho( double velocidadeMaxima,
                                   double gastoDeFuel,
                                   double perdaDeOleo,
                                   double consumoDeBateria,
                                   double consumoDePressao );
                                   
        double getVelocidade();
    
};
