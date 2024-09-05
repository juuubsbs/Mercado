// IDEIAS
/*
    ncurses (tela gráfica)
    salvar dados em Excel
    usar templates para não crachar caso haja erros
    #define para aumentar o tamanho da fonte
    usar lib de tempo (chrono?)
    gerar um relatório diário ou relatório de uso*/

#include <iostream>
#include <windows.h>





int main(){

    //início do menu
    std:: string cadastro, venda, pagamento, sair; //textos exibidos no menu
    cadastro = "------------Cadastro-------------";
    venda    = "--------------Venda--------------";
    pagamento= "------------Pagamento------------";
    sair     = "--------------Sair---------------";

    std:: cout << cadastro << std::endl;
    std:: cout << venda << std:: endl;
    std:: cout << pagamento << std:: endl;
    std:: cout << sair << std:: endl;

    int seta; 
    seta = GetAsyncKeyState(VK_UP);
    std:: cin.get() >> seta;

        switch (seta){
        case 72:
            std:: cout << "oie";
            break;
        default:
            std:: cout << "vish";
        }








                  

    return 0;
}