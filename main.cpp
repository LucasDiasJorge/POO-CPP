#include <iostream>
#include <string>

using namespace std;

// Declaração da classe
class Carro {
  public:
    // Propriedades
    std::string marca;
    std::string modelo;
    int ano;
    
    // Métodos
    void acelerar(int velocidade) {
      std::cout << "Acelerando o " << marca << " " << modelo << " a " << velocidade << " km/h\n";
    }
    void frear() {
      std::cout << "Freando o " << marca << " " << modelo << "\n";
    }
};

int main() {
  // Criação de um objeto da classe Carro
  Carro meuCarro;
  meuCarro.marca = "Fiat";
  meuCarro.modelo = "Uno";
  meuCarro.ano = 2020;
  meuCarro.acelerar(50);
  meuCarro.frear();
  return 0;
}
