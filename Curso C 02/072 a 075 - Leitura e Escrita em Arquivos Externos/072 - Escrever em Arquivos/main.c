#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main () {

    //Cria o objeto de arquivo
    ofstream arquivoDeSaida;

    //Abre o arquivo ou cria caso n�o exista
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    //Escreve algo
    arquivoDeSaida << "\nMam�ezinha";

    //Fecha o arquivo
    arquivoDeSaida.close();

    return 0;
}


