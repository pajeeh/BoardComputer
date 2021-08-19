/*  Este programa foi desenvolvido por Luis A. G. Dos Santos 
*   em Faculdade de Tecnologia da UNICAMP.
*   Nome: LUIS AUGUSTO GOMES DOS SANTOS
*   RA: 256647
*   Professor: Varese Salvador Timóteo
*   Disciplina: Programação Orientada A Objetos I
*************************************************************
*   Valores de consumo e desempenho baseados em carros populares de 2021
*   Combustível: Gasolina
*   Horário: Brasília (DF)
*   Data: Atual do computador ou máquina que está executando
*/

/*#ifdef WIN32
#else
    #include <unistd.h>
#endif*/

#include <iostream>
#include <ctime>      // biblioteca para utilizar funções de data e hora
#include "colors.hpp" //biblioteca criada para adicionar cores aos textos
#include "computadorDeBordo.cxx"
#include "gerenciamentoDeFalhas.cxx"
#include "gerenciamentoDeDesempenho.cxx"

using namespace std;

int main(void)
{
    int atualizacao, percurso = 0, distancia;

    double velocidadeMaxima = 120;
    double fuel;
    double oleo;
    double carga;
    double pressao;

    /* IMPORTANTE:
     * Modifique o valor das variáveis abaixo para simular diferentes cenários. Os valores
     * devem estar entre 0 e 1. O valor 0 significa que não existe consumo, perda, desgaste
     * do item referenciado pela variável. O valor 1 significa alto consumo, perda ou
     * desgaste e o veiculo apresentará falhas.
     */
    double gastoDeFuel = 0.100;
    double perdaDeOleo = 0.09;
    double consumoDeBateria = 0.1;
    double consumoDePressao = 0.1;
    double temperatura = 23.1; // chamar a variável direto na main

    cout << "Digite a distância a ser percorrida em kilômetros (inteiro)[recomendado 15]: ";
    cin >> distancia;
    //cout << "Digite a taxa de animacao em segundos (0 desativa animacao)[recomendado: 1]: ";
    //cin >> atualizacao;

    gerenciamentoDeFalhas falhas(velocidadeMaxima, gastoDeFuel, perdaDeOleo, consumoDeBateria, consumoDePressao);
    gerenciamentoDeDesempenho desempenho(velocidadeMaxima, gastoDeFuel, perdaDeOleo, consumoDeBateria, consumoDePressao);

    //cout << endl << "-----------------------------------" << endl;
    time_t t = time(nullptr);
    tm *ltm = localtime(&t);

    int ano = 1900 + ltm->tm_year;
    int mes = 1 + ltm->tm_mon;
    int dia = ltm->tm_mday;
    int hora = ltm->tm_hour;
    int minuto = ltm->tm_min;
    int segundo = ltm->tm_sec;

    std::cout << hey::whitec << endl
              << "-----------------------------------" << hey::off << endl;

    while (percurso <= distancia)
    {

        std::cout << hey::bluep << "DATA: " << dia << "/" << mes << "/" << ano << hey::off << endl;
        std::cout << hey::bluep << "HORA: " << hora << ":" << minuto << ":" << segundo << hey::off;
        std::cout << hey::whitec << endl
                  << "-----------------------------------" << hey::off << endl;
        cout << "Temperatura:\t\t" << temperatura << "°C" << endl;
        cout << "Distância:\t\t" << percurso << " Km" << endl;
        cout << "Velocidade:\t\t" << desempenho.acelerar() << " Km/h" << endl;

        fuel = falhas.getFuel();

        if (fuel > 0)
        {
            cout << "Combustível:\t\t" << fuel << " Litros" << endl;
        }
        else
        {
            std::cout << hey::redn << endl
                      << "AVISO: Veículo com vazamento de combustível" << hey::off << endl
                      << endl;
            break;
        }
        // alerta de Óleo
        oleo = falhas.getNiveldeOleo();

        if (oleo > 0)
        {
            cout << "Nivel de óleo:\t\t" << oleo << " %" << endl;
        }
        else
        {
            std::cout << hey::redn << endl
                      << "AVISO: Veículo com vazamento de óleo" << hey::off << endl
                      << endl;
            break;
        }

        carga = falhas.getCargaDeBateria();

        if (carga > 0)
        {
            cout << "Carga da bateria:\t" << carga << " Amp" << endl;
        }
        else
        {
            std::cout << hey::redn << endl
                      << "FALHA: Veículo parado (desligado) por bateria com baixa carga" << hey::off << endl
                      << endl;
            break;
        }

        pressao = falhas.getPressaoDosPneus();

        if (pressao > 0)
        {
            cout << "Pressão dos pneus:\t" << pressao << " Psi" << endl;
        }
        else
        {
            std::cout << hey::redn << endl
                      << "AVISO: Veiculo está com baixa pressão nos pneus" << hey::off << endl
                      << endl;
            break;
        }

        std::cout << hey::whitec << "-----------------------------------" << hey::off << endl;

        if (atualizacao > 0)
        {
            //sleep( atualizacao );
        }

        percurso += 1;
    }
}
