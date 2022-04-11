/*
          ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
          ||                                                    ||
          ||      |---------------------------------------|     ||
          ||      |   Tralho de introdução a algoritmos   |     ||
          ||      |---------------------------------------|     ||
          ||                                                    ||
          ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
          || Autores:                                           ||
          ||    Daniel Botelho                                  ||
          ||    João Vitor Santos Barbosa                       ||
          ||    Pedro Henrrique Guimarães Carvalho              ||
          ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
          ||                                                    ||
          ||  Repositório original disponivél no github         ||
          ||  Acessível pelo link:                              ||
          ||  https://github.com/JoaoVitorSBarbosa/TrabalhoIALG ||
          ||                                                    ||
          ||||||||||||||||||||||||||||||||||||||||||||||||||||||||

*/

#include <iostream>

using namespace std;

void optionSelect() {

    unsigned int option = 0;
    cout<< "Bem vindo!" << endl;
    cout<< "Insira alguma opção" << endl;
    cout<< "(1)incluir \n(2)excluir \n(3)listar \n(4)alterar\n(5)ordenar \n(6)sair "<< endl;
    cin >> option;
    while (option>6)
    {
      cout << "Opção inválida, por favor tente novamente" << endl;
      cin >> option;
    }
    
  return;
}
int main () {
  optionSelect();
  return 0;
}
