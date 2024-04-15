#include <iostream>
#include <string>

class Jogo{

    private:
        std::string nome;
        float preco;
        int horas;
        float custo;

        void calcular(){ if (horas > 0) custo = preco/horas;}

    public:
        void adquirir(const std::string& titulo, float valor);
        void atualizar(float valor);
        void jogar(int tempo);
        void exibir();
};

void Jogo::adquirir(const std::string& titulo, float valor){
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = valor;
}

void Jogo::atualizar(float valor){
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo){
    horas += tempo;
    calcular();
}

void Jogo::exibir(){
    std::cout << "Jogo: " << nome << " Valor: " << preco << " Horas jogadas: " << horas << " Custo: " << custo << std::endl;
}

int main(){

    Jogo jogo1;
    jogo1.adquirir("FIFA",300);
    jogo1.jogar(5);
    jogo1.exibir();
    jogo1.atualizar(150);
    jogo1.jogar(10);
    jogo1.exibir();

    return 0;
}