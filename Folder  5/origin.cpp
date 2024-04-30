#include <iostream>
#include <queue>

using namespace std;

struct Cliente {
    string nome;
    int idade;
};

int main() {
    queue<Cliente> fila;

    // Adicionando alguns clientes à fila
    fila.push({"Joao", 25});
    fila.push({"Maria", 30});
    fila.push({"Pedro", 40});
    fila.push({"Ana", 35});

    // Simulando o atendimento dos clientes
    while (!fila.empty()) {
        Cliente cliente_atual = fila.front();
        cout << "Atendendo cliente: " << cliente_atual.nome << " (idade: " << cliente_atual.idade << ")" << endl;
        fila.pop(); // Removendo o cliente atendido da fila
    }

    // Verificando se a fila está vazia
    if (fila.empty()) {
        cout << "Todos os clientes foram atendidos. Fila vazia!" << endl;
    } else {
        cout << "Ainda há clientes na fila." << endl;
    }

    return 0;
}
