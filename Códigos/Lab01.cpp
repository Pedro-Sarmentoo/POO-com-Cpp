#include <strings.h>
#include <iostream>

class contaBancaria{

    private:
        std::string nomeCliente;
        int numConta;
        float saldoConta;

    public:
    //Prototipos das funções da classe contaBancaria
        void exibir();
        void depositar( float saldoConta);
        void criarConta(std::string nomeCliente, int numConta, float saldoConta);
        void sacar( float saldoConta);

};

void contaBancaria::criarConta(std::string nome, int num, float saldo){
    nomeCliente = nome;
    numConta = num;
    saldoConta = saldo;

    std::cout << "A conta foi criada" << std::endl;
}
//const std::string nome, const int num, const float saldo
void contaBancaria::exibir(){std::cout << "Nome: " << nomeCliente << " Numero da conta: " << numConta << " Saldo: " << saldoConta << std::endl;}//Assim que printa na tela

void contaBancaria::depositar(float valor){
    saldoConta += valor;
    std::cout << "O valor foi depositado" << std::endl;
}

void contaBancaria::sacar( float valor){
    if(valor > saldoConta){std::cout << "Nao tem esse valor disponivel na sua conta!" << std::endl;}
    else{
        saldoConta -= valor;
        std::cout << "O seu saque esta disponivel" << std::endl;
    }
}

int main(){

    contaBancaria pedro;
    
    pedro.criarConta("Pedro Henrique",1000,1000.50);
    pedro.exibir();
    pedro.sacar(100);
    pedro.exibir();

    return 0;
}